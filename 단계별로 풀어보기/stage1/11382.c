#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double A, B, C;

	scanf("%lf %lf %lf", &A, &B, &C);

	if ((A<0 || B<0 || C<0) || ((A>10e12)||(B>10e12)||(C>10e12)))
		printf("1���� 10^12 ������ ���ڸ� �Է��Ͻÿ�\n");
	else
		printf("%.lf\n",(A + B + C));
	return 0;
}