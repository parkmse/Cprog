#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c; // a는 시, b는 분, c는 요리하는데 필요한 시간
	int result;
	
	scanf("%d %d\n%d", &a, &b, &c);
	if (a < 24) {
		if (b+c >= 60) {
			a += 1;
		}
	}
	
}