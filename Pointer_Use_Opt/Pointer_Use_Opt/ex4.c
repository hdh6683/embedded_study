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

	// ����ü�� ������ ���� head�� ���Ḯ��Ʈ�� ���� ��� �ּ�,
	// tmp�� malloc()�� �����ּ�, tail�� ����Ʈ�� ������ ��� �ּ�
	struct sample* head, * tmp, * tail;

	// mal.c(����ҽ�) ������ �б���� ����
	fp = fopen("mal.c", "r");

	// ���Ͽ��⿡ ���� �߻��� �޽��� ��� �� ������ ����
	if (fp = NULL) {
		printf("file not found");
		exit(1);
	}

	// ���� ����Ʈ ���� �� �ʱ�ȭ. ��尡 �ϳ��� ������ ��Ÿ��
	head = NULL;

	// ������ ���� ���� ������ �� ���ξ� �о� buf �迭�� ����
	while (fgets(buf, MAX, fp) != NULL) {

		// malloc()�� �̿��ؼ� struct sampleũ�⸸ŭ�� �޸� �Ҵ�
		// �޾� tmp�� �ּ� ���� => ���Ḯ��Ʈ ��Ʈ ����
		tmp = (struct sample*)malloc(sizeof(struct sample));

		// ���Ϸκ��� �о� ���� �� ������ tmp�� ��� line�� ����
		strcpy(tmp->line, buf);

		// ������ ��� ���� ����Ʈ�� ����
		// head�� ���̸� ���� tmp�� ù��° ���, tmp�� head�� ��
		if (head == NULL)
			head = tmp;

		// head�� NULL�� �ƴϸ�, ������(tail)�� ��� ����
		else
			tail->next = tmp;

		// tmp�� ������ ����̹Ƿ� tmp�� tail�� ��
		tail = tmp;

		// tail�� ���� ��尡 �����Ƿ� next�� NULL
		tail->next = NULL;
	}
	// ����� ���� ���� �ݱ�
	close(fp);

	// �ϼ��� ���� ����Ʈ�� ����. �켱 tmp�� �̿��� head�� ����
	tmp = head;
	// ���� ��尡 ���� ������ �ݺ�
	while (tmp->next != NULL) {

		//���� ����� ��� line ���
		printf("%s", tmp->line);
		// tmp�� ���� ���� �̵�
		tmp = tmp->next;
	}
	// �޸� ����
	tmp = head;
	while (tmp != NULL) {
		head = head->next;
		free(tmp);
		tmp = head;
	}
}