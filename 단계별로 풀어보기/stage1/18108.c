#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int bul, seo;
	
	scanf("%d", &bul);
	if (bul >= 1000 && bul <= 3000) {
		seo = bul - 543;
		printf("%d", seo);
	}
	else
		printf("1000 ~ 3000�� ������ ������ �Է��Ͻÿ�\n");
	return 0;
}