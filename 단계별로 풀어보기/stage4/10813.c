#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m, temp; // n: 1���� n������ ��ȣ m: ��ȣ ��ȯ Ƚ�� temp: �ӽ� ���� ����
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