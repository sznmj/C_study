#include <stdio.h>

double get_array_avg(int values[], int n);
void print_array(int values[], int n);

double get_array_avg(int values[], int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum += values[i];
	}

	return sum / n;
}

void print_array(int values[], int n)
{
	printf("[ ");
	for (int j = 0; j < n; j++) {
		printf("%d ", values[j]);
	}
	printf("]\n");
}

int main(void)
{
	int values[5] = { 10,20,30,40,50 };

	print_array(values, 5);
	printf("배열 원소들의 평균 = %lf", get_array_avg(values, 5));

	return 0;
}