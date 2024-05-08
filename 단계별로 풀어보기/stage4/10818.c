#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, x; // n: 정수의 갯수, x: 숫자
	int max, min;

	scanf("%d", &n);
	int* num = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	max = num[0];
	min = num[0];
	for (int i = 0; i < n; i++) {
		if (num[i] > max) {
			max = num[i];
		}
		if (num[i] < min) {
			min = num[i];
		}
	}
	printf("%d %d\n", min, max);
	free(num);
	return 0;
}

