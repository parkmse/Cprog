#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int test;
	double max, lie = 0;

	scanf("%d", &test);

	double* score = (double*)malloc(sizeof(double) * test);

	for (int i = 0; i < test; i++) {
		scanf("%lf", &score[i]);
	}

	// ÃÖ´ñ°ª Ã£±â
	max = score[0];

	for (int j = 0; j < test; j++) {
		if (score[j] > max) {
			max = score[j];
		}
	}

	for (int k = 0; k < test; k++) {
		score[k] = (score[k] / max * 100);
	}


	for (int x = 0; x < test; x++) {
		lie += score[x];
	}
	lie /= test;
	printf("%lf", lie);

	free(score);
	return 0;
}