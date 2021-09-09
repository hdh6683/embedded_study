#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <pthread.h>

void* Thread(void* arg) {
	int i;
	for (i = 0; i < 5; i++) {
		printf("스레드 인자 : %d\t횟수 : %d\n", *(int*)arg, i);
	}
}

void main(void) {
	int i, main_arg = 5, th_arg = 3;
	pthread_t thread_test;

	/*pthread_create() 함수의 인자
	스레드ID, 스레드 속성, 스레드 함수, 스레드 함수로 넘길 인자*/
	pthread_create(&thread_test, NULL, (void* (*)(void*))Thread, &th_arg);

	for (i = 0; i < 5; i++)
		printf("메인 인자 : %d\t횟수 : %d\n", main_arg, i);
}