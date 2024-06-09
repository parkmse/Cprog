#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char s[11][1001];
	int n, i;

	scanf("%d", &n);

	for (i = 0; i <= n; i++) {
		gets(s[i]);
	}
	for (i = 0; i <= n; i++) {
		int len = strlen(s[i]);
		if (len > 0) {
			printf("%c%c\n", s[i][0], s[i][len - 1]);
		}
	}
	return 0;
}