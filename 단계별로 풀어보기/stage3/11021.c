#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T;
	int A, B;

	scanf("%d", &T);
	int* rs = (int*)malloc(sizeof(int)* T);
	
	if (rs == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		if ((A < 1 || A > 9) && (B < 1 || B > 9)) {
			printf("1부터 9 사이 숫자 입력\n");
			return 1;
		}
		else {
			rs[i] = A + B;
		}
	}
	for (int i = 0; i < T; i++) {
		printf("Case #%d: %d\n", i + 1, rs[i]);
	}

	free(rs);
	return 0;
}