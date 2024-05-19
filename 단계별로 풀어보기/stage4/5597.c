#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total_stud = 30;
	int sub_st = 28;
	int sub[28];
	int not_sub[2];
	int found = 0;

	for (int i = 0; i < sub_st; i++) {
		scanf("%d", &sub[i]);
	}
	int all_stud[30] = { 0 };

	for (int i = 0; i < sub_st; i++) {
		all_stud[sub[i] - 1] = 1;
	}
	for (int i = 0; i < total_stud; i++) {
		if (all_stud[i] == 0) {
			not_sub[found] = i + 1;
			found++;
		}
	}

	for (int i = 0; i < 2; i++)
		printf("%d\n", not_sub[i]);
	return 0;
}
