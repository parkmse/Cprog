#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour, minute, time; // hour�� ��, minutes�� ��, times�� �丮�ϴµ� �ʿ��� �ð�
	int end_h, end_min; // ������ �ð�

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

		// 24�ð� �Ѿ�� ���
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