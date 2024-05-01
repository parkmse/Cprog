#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B;
	int ptr;

	scanf("%d", &ptr);
	int* arr = malloc(ptr * sizeof(int));
	for (int i = 0; i < ptr; i++) {
		scanf("%d %d", &A, &B);
		arr[i] = A + B;
	}
	for (int i = 0; i < ptr; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}

/*
int A, B;
	int ptr;

	scanf("%d", &ptr);
	int* arr = malloc(ptr*sizeof(int));
	for (int i = 0; i < ptr; i++) {
		scanf("%d %d", &A, &B);
		arr[i] = A + B;
	}
	for (int i = 0; i < ptr; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
	*/