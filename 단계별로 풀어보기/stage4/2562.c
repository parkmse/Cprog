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
			printf("자연수를 입력하세요\n");
			return 1;
		}
	}
	
	max = 0;
	hi = 1; // 위치는 1부터 시작하므로 1로 초기화 (초기화 안 하면 틀림)

	for (int i = 0; i < SIZE; i++) {
		if (num[i] > max) {
			max = num[i];
			hi = i+1;
		}
	}
	printf("%d\n%d", max, hi);
	return 0;
}