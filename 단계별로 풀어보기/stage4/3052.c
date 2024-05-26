#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int res[10];
	int uniq_count = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &res[i]);
		res[i] %= 42;
	}

	for (i = 0; i < 10; i++) {
		int is_unique = 1;

		for (int j = 0; j < i; j++) {
			if (res[i] == res[j]) {
				is_unique = 0;
				break;
			}
		}
		if (is_unique) {
			uniq_count++;
		}
	}
	printf("%d\n",uniq_count);
}
