#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 256

struct sample {
	char line[MAX];
	struct sample* next;
};

void main(void) {
	FILE* fp;
	char buf[MAX];

	// 구조체형 포인터 선언 head는 연결리스트의 시작 노드 주소,
	// tmp는 malloc()의 리턴주소, tail은 리스트의 마지막 노드 주소
	struct sample* head, * tmp, * tail;

	// mal.c(현재소스) 파일을 읽기모드로 열기
	fp = fopen("mal.c", "r");

	// 파일열기에 문제 발생시 메시지 출력 후 비정상 종료
	if (fp = NULL) {
		printf("file not found");
		exit(1);
	}

	// 연결 리스트 생성 전 초기화. 노드가 하나도 없음을 나타냄
	head = NULL;

	// 파일의 끝을 만날 때까지 한 라인씩 읽어 buf 배열에 저장
	while (fgets(buf, MAX, fp) != NULL) {

		// malloc()을 이용해서 struct sample크기만큼의 메모리 할당
		// 받아 tmp에 주소 저장 => 연결리스트 노트 생성
		tmp = (struct sample*)malloc(sizeof(struct sample));

		// 파일로부터 읽어 들인 한 라인을 tmp의 멤버 line에 복사
		strcpy(tmp->line, buf);

		// 생성된 노드 연결 리스트에 연결
		// head가 널이면 현재 tmp는 첫번째 노드, tmp가 head가 됨
		if (head == NULL)
			head = tmp;

		// head가 NULL이 아니면, 마지막(tail)에 노드 연결
		else
			tail->next = tmp;

		// tmp가 마지막 노드이므로 tmp가 tail이 됨
		tail = tmp;

		// tail은 다음 노드가 없으므로 next에 NULL
		tail->next = NULL;
	}
	// 사용이 끝난 파일 닫기
	close(fp);

	// 완성된 연결 리스트에 접근. 우선 tmp를 이용해 head에 접근
	tmp = head;
	// 다음 노드가 널일 때까지 반복
	while (tmp->next != NULL) {

		//현재 노드의 멤버 line 출력
		printf("%s", tmp->line);
		// tmp를 다음 노드로 이동
		tmp = tmp->next;
	}
	// 메모리 해제
	tmp = head;
	while (tmp != NULL) {
		head = head->next;
		free(tmp);
		tmp = head;
	}
}