#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int H, M;
	int m;
	scanf("%d %d", &H, &M);
	m = M - 45;
	if (m < 0) {
		m += 60;
		H -= 1;
	}
	if (H < 0) H += 24;
	printf("%d %d\n", H, m);
	
	return 0;
}

/*
	if (0 <= M && M < 45) {
		if (H > 1 && H < 24) {
			H -= 1;
			M = M - TIMER + 60;
		}
		else if (H == 0) {
			H = 23;
			M = M - TIMER + 60;
		}

		else
			printf("0부터 23사이의 값을 입력하세요\n");
	}
	else if (45 <= M && M < 60) {
		if (H > 1 && H < 24) {
			H -= 1;
			M -= TIMER;
		}
		else if (H == 0) {
			H = 23;
			M -= TIMER;
		}
		else
			printf("0부터 23사이의 값을 입력하세요\n");
	}
	else
		printf("0부터 59사이의 값을 입력하세요\n");

	printf("%d %d", H, M);	
*/