#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (x < -1000 && x > 1000 && y < -1000 && y > 1000)
		printf("-1000부터 1000사이의 값을 입력하세요");
	else {
		if (x > 0 && y > 0) printf("1");
		else if (x < 0 && y > 0) printf("2");
		else if (x < 0 && y < 0) printf("3");
		else if (x > 0 && y < 0) printf("4");
		else printf("x와 y는 모두 양수나 음수입니다.\n");
	}
	return 0;
}