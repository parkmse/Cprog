#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k, size; // j: ��ĭ �ݺ� k: * �ݺ�

	scanf("%d", &size);

	for (i = 1; i <= size; i++) {
		for (j = size - i; j > 0; j--)
			printf(" ");
		for (k = 1; k <= i ; k++)
			printf("*");
		printf("\n");
	}
	return 0;
 }