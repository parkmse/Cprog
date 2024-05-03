#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour, minute, time; // hour는 시, minutes는 분, times는 요리하는데 필요한 시간
	int end_h, end_min; // 끝나는 시각

	scanf("%d %d", &hour, &minute);
	scanf("%d", &time);

	if (time >= 60) {
		end_h = time / 60;
		end_min = time % 60;

		hour += end_h;
		minute += end_min;

		if (minute >= 60) {
			hour += minute / 60;
			minute %= 60;
		}

		// 24시가 넘어가는 경우
		if (hour >= 24)
			hour %= 24;

		printf("%d %d\n", hour, minute);
	}
	else {
		minute += time;

		if (minute >= 60) {
			hour += minute / 60;
			minute %= 60;
		}
		if (hour >= 24) 
			hour %= 24;
		
		printf("%d %d\n", hour, minute);
	}
	return 0;
}