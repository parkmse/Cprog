#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c; // a�� ��, b�� ��, c�� �丮�ϴµ� �ʿ��� �ð�
	int result;
	
	scanf("%d %d\n%d", &a, &b, &c);
	if (a < 24) {
		if (b+c >= 60) {
			a += 1;
		}
	}
	
}