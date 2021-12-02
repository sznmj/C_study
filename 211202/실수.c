#include <stdio.h>

void get(double value, int* i_part, double* f_part);

void get(double value, int* i_part, double* f_part)
{
	*i_part = (int)value;
	*f_part = value - *i_part;
}

int main(void)
{
	double value = 3.141592, y;
	int x;

	get(value, &x, &y);

	printf("정수부 = %d\n", x);
	printf("소수부 = %lf\n", y);
	
	return 0;
}