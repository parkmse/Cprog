#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m; // n: 바구니 번호, m: 공을 넣는 횟수
	int blanket[100] = { '0' }; // blanket: 바구니
	int i, j, k;

	scanf("%d %d", &n, &m);

	for (int x = 1; x <= m; x++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int y = i; y <= j; y++) {
			blanket[y] = k;
		}
	}
	for (int z = 0; z < n; z++) {
		printf("%d ", blanket[z+1]);
	}
	return 0;
}