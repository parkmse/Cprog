#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, cut; // n: 갯수 cut: 기준 숫자
	int xs; // xs: 입력 숫자들

	scanf("%d %d", &n, &cut);

	int* ar = (int*)malloc(sizeof(int) *n);
	if (ar == NULL) {
		printf("메모리 할당 실패\n");
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
