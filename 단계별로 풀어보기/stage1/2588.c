#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int r1,r2;
	int pl3, pl4, pl5, result;

	scanf("%d\n%d", &r1,&r2);
	pl3 = r1 * ((r2 % 100) % 10); // �� �ڸ� �ڿ����� �� �ڸ� ���ڸ� ���ϴ� ����
	pl4 = r1 * ((r2 % 100) / 10); // ��� ���ڸ� ���ϴ� ����
	pl5 = r1 * (r2 / 100); // ó�� ���ڸ� ���ϴ� ����
	printf("%d\n", pl3);
	printf("%d\n", pl4);
	printf("%d\n", pl5);
	printf("%d\n", r1 * r2);
	return 0;
}