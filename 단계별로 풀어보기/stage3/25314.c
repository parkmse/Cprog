#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, n; // n: 4의 배수의 갯수

	scanf("%d", &x);
	
	if ((x % 4) != 0) printf("4의 배수를 입력하세요");
	
	else
	{
		n = x / 4;
		for (int i = 1; i <= n; i++)
			printf("long ");
		printf("int");
	}
	return 0;
}