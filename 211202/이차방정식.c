#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double* xplus, double* xminus);

void quadratic(int a, int b, int c, double* xplus, double* xminus)
{
	if ((b * b - a * c * 4) < 0) return 0;

	*xminus = (-b - sqrt(b * b - a * c * 4)) / (2 * a);
	*xplus = (-b + sqrt(b * b - a * c * 4)) / (2 * a);

}

int main(void)
{
	int a, b, c;
	double x = 0, y = 0;

	printf("세 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	quadratic(a, b, c, &x, &y);

	printf("첫번째 실근 = %lf\n", x);
	printf("두번째 실근 = %lf", y);

	return 0;
}