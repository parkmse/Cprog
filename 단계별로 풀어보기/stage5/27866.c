#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s[1000]="";
	int num;

	scanf("%s", s);
	//fgets(s, sizeof(s), stdin);
	scanf("%d", &num);

	printf("%c", s[num-1]);

	return 0;
}