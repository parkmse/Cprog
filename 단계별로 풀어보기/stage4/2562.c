#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 9

int main(void)
{
	int num[SIZE];
	int max, hi;
	
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &num[i]);
		if (num[i] < 1) {
			printf("�ڿ����� �Է��ϼ���\n");
			return 1;
		}
	}
	
	max = 0;
	hi = 1; // ��ġ�� 1���� �����ϹǷ� 1�� �ʱ�ȭ (�ʱ�ȭ �� �ϸ� Ʋ��)

	for (int i = 0; i < SIZE; i++) {
		if (num[i] > max) {
			max = num[i];
			hi = i+1;
		}
	}
	printf("%d\n%d", max, hi);
	return 0;
}