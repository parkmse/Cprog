#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100];
	int length;

	scanf("%s", s);
	length = strlen(s);

	printf("%d", length);
	
	return 0;
}