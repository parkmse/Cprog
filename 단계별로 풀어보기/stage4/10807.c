#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int r, x1[100], v; // r: 입력 갯수, x1: 숫자 저장 배열
	int find, tr=0;
	scanf("%d", &r);
	for (int i = 0; i < r; i++) {
		scanf("%d",&v);
		x1[i] = v;
	}
	scanf("%d", &find);
	for (int i = 0; i < r; i++) {
		if (x1[i] == find)
			tr++;
	}
	printf("%d", tr);
}