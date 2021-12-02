#include <stdio.h>

void equ(double x, double y);

void equ(double x, double y)
{
	printf("x = %lf, ", x);
	printf("y = %lf, ", y);

	printf("f(x,y) = %lf", 1.5 * x + 3.0 * y);
}

int main(void)
{
	equ(1, 1);
	return 0;
}