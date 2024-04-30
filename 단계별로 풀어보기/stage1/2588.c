#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int r1,r2;
	int pl3, pl4, pl5, result;

	scanf("%d\n%d", &r1,&r2);
	pl3 = r1 * ((r2 % 100) % 10); // 세 자리 자연수의 끝 자리 숫자를 구하는 연산
	pl4 = r1 * ((r2 % 100) / 10); // 가운데 숫자를 구하는 연산
	pl5 = r1 * (r2 / 100); // 처음 숫자를 구하는 연산
	printf("%d\n", pl3);
	printf("%d\n", pl4);
	printf("%d\n", pl5);
	printf("%d\n", r1 * r2);
	return 0;
}