#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", x + y);
	printf("%d\n", x - y);
	printf("%d\n", x * y);
	printf("%d\n", x / y);
	printf("%d\n", x % y);

	return 0;
}