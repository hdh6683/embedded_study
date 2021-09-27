#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <process.h>
#define SECOND 1000

unsigned char EW = 0;
unsigned char NS = 0;
unsigned char T3 = 0;
unsigned char T5 = 0;
unsigned char state = 0;	// NS_G는 0, EW_G는 1

//void Thread_Func(void* n);
void thread_func_T3(void* n);
void thread_func_T5(void* n);


int main() {
	int choice;
	_beginthread(thread_func_T3, 0, (void*)1);
	_beginthread(thread_func_T5, 0, (void*)2);
	while (1)
	{
		printf("갈 방향을 고르시오.\n");
		printf("1. 서 2. 북 3. 동 4. 남 5. 종료\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
		case 3:
			EW = 1;
			NS = 0;
			break;
		case 2:
		case 4:
			NS = 1;
			EW = 0;
			break;
		case 5:
			printf("프로그램을 종료합니다.\n");
			return 0;
		default:
			printf("올바르지 않은 입력입니다.\n");
		}

		if (state == 0 && (choice == 1 || choice == 3))
		{
			while (1)
			{
				if (EW && T5)
				{
					state = 1;
					printf("동서 초록불이 켜졌습니다.\n");
					break;
				}
				else
				{
					continue;
				}
			}
		}
		else if (state == 1 && (choice == 2 || choice == 4))
		{
			while (1)
			{
				if ((NS || !(EW)) && T3)
				{
					state = 0;
					printf("남북 초록불이 켜졌습니다.\n");
					break;
				}
				else
				{
					continue;
				}
			}
		}
		else {
			printf("이미 초록불이 켜져있습니다. 지나가세요.\n");
		}

	}
	return 0;
}

//void Thread_Func(void* n) {
//	int thread_num = (int)n;
//	printf("Thread %d is started\n", thread_num);
//	Sleep(1000 * (NUMTHREAD - thread_num));
//	printf("Thread %d is ended\n", thread_num);
//	return;
//}

void thread_func_T3(void* n)
{
	while (1)
	{
		//printf("3초 타이머 시작\n");
		Sleep(SECOND * 2);
		//printf("3초\n");
		T3 = 1;
		Sleep(SECOND);
		T3 = 0;
	}
	return;
}

void thread_func_T5(void* n)
{
	while (1)
	{
		//printf("5초 타이머 시작\n");
		Sleep(SECOND * 4);
		//printf("5초\n");
		T5 = 1;
		Sleep(SECOND);
		T5 = 0;
	}
	return;
}