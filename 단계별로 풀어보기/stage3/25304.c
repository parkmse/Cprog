#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total; // �Է��� �� �ݾ�
	int n, n1, price, sum = 0;  // n: ������ �� ���� n1: �� ������ ����
								// price: �� ������ ���� sum: ������ �� �ݾ�
	scanf("%d", &total);
	scanf("%d", &n); 

	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &price, &n1);
		sum = sum + price * n1;
	}

	if (sum == total) printf("Yes");
	else printf("No");
	return 0;
}