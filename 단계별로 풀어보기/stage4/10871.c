#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, cut; // n: ���� cut: ���� ����
	int xs; // xs: �Է� ���ڵ�

	scanf("%d %d", &n, &cut);

	int* ar = (int*)malloc(sizeof(int) *n);
	if (ar == NULL) {
		printf("�޸� �Ҵ� ����\n");
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &xs);
		ar[i] = xs;
		if (ar[i] < cut)
			printf("%d ", ar[i]);
	}
	free(ar);
	return 0;
}
