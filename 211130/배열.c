#include <stdio.h>
#define SIZE 10

int get_array_sum(int* A, int size);

int get_array_sum(int* A, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
		sum += A[i];
	}

	printf("\n배열 요소의 합 = %d", sum);
}

int main(void)
{
	int data[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	get_array_sum(data, SIZE);

	return 0;
}