#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, n; // n: 4�� ����� ����

	scanf("%d", &x);
	
	if ((x % 4) != 0) printf("4�� ����� �Է��ϼ���");
	
	else
	{
		n = x / 4;
		for (int i = 1; i <= n; i++)
			printf("long ");
		printf("int");
	}
	return 0;
}