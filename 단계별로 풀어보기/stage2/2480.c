#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sq1, sq2, sq3; // 주사위 눈 변수
	int money;

	scanf("%d %d %d", &sq1, &sq2, &sq3);

	if (sq1 == sq2 && sq2 == sq3)
		money = 10000 + sq1 * 1000;
	else if ((sq1 == sq2) && sq1 != sq3)
		money = 1000 + sq1 * 100;
	else if ((sq2 == sq3) && sq2 != sq1)
		money = 1000 + sq2 * 100;
	else if ((sq3 == sq1) && sq3 != sq2)
		money = 1000 + sq1 * 100;
	else {
		if (sq1 > sq2 && sq1 > sq3)
			money = sq1 * 100;
		else if (sq2 > sq1 && sq2 > sq3)
			money = sq2 * 100;
		else 
			money = sq3 * 100;
	}
	printf("%d\n", money);
}