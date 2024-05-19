#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int true[29];
	int min, max, tmp;

	for (int j = 0; j < 28; j++) {
		scanf("%d", &true[j]);
	}

	for (int k = 0; k < 28; k++) {
		for (int n = 0; n < 28; n++) {
			if (true[n] != (k+1)) {
				min = true[n];
				break;
			}
		}
		for (int m = 0; m < 28; m++) {
			if (true[m] != (k + 1)) {
				max = true[m];
				break;
			}
		}
		if (min > max) {
			tmp = min;
			min = max;
			max = tmp;
		}
	}
	printf("%d\n%d", min, max);
	return 0;
}