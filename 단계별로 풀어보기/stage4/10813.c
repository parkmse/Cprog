#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m, temp; // n: 1부터 n까지의 번호 m: 번호 교환 횟수 temp: 임시 저장 공간
	int arr[100];
	int x, y;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	for (int j = 0; j < m; j++) {
		scanf("%d %d", &x, &y);
		temp = arr[x - 1];
		arr[x - 1] = arr[y - 1];
		arr[y - 1] = temp;
	}
	for (int k = 0; k < n; k++) {
		printf("%d ", arr[k]);
	}

	return 0;
}