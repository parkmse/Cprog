#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total; // 입력할 총 금액
	int n, n1, price, sum = 0;  // n: 물건의 총 갯수 n1: 각 물건의 갯수
								// price: 각 물건의 가격 sum: 물건의 총 금액
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