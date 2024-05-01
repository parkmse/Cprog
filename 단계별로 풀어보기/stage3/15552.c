#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;		// �׽�Ʈ���̽� ����
	int A, B;

	scanf("%d", &n);

	if (n > 1000000) {
		printf("���� ������ �� 1000000��");
		return 1;
	}

	int* result = (int*)malloc(sizeof(int)* n);
	if (result == NULL) {
		printf("�޸� �Ҵ� ����\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &A, &B); 
		if ((A < 1 || A > 1000) && (B < 1 || B > 1000)) {
			printf("1���� 1000������ ���ڸ� �Է�");
			return 1;
		}
		else 
			result[i] = A + B;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", result[i]);
	}
	
	free(result);
	
	return 0;
}
