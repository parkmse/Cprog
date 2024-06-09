#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char s[100][101];
	int i;

	for (i = 0; i < 100; i++) {
		if (fgets(s[i], 100, stdin) == NULL) {
			break;
		}
	}

	for (int j = 0; j < i; j++) {
		printf("%s", s[j]);
	}

	return 0;
}
