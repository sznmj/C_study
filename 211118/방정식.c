#include <stdio.h>
#include <math.h>

double quad_eqn(double a, double b, double c);

double quad_eqn(double a, double b, double c)
{
	int d = pow(b, 2) - 4 * a * c;

	if (d< 0) {
		printf("근이 없습니다.\n");
		return 0;
	}

	double x = (-b + sqrt(d)) / 2 * a;
	double y = (-b - sqrt(d)) / 2 * a;

	 printf("%lf \n%lf", x, y);
	
	return 0;
	
}

int main(void)
{
	double a, b, c;

	printf("2차 방정식의 계수를 입력하세요 : \na : ");
	scanf_s("%lf", &a);
	printf("b : ");
	scanf_s("%lf", &b);
	printf("c : ");
	scanf_s("%lf", &c);

	quad_eqn(a, b, c);

	return 0;
}