#include <stdio.h>

double get_bigger();

double get_bigger()
{
	double x, y;

	printf("실수를 입력하세요 : ");
	scanf_s("%lf", &x);

	printf("실수를 입력하세요 : ");
	scanf_s("%lf", &y);

	if (x > y) printf("더 큰 수는 %lf입니다.", x);
	else printf("더 큰 수는 %lf입니다.", y);
}

int main(void)
{
	get_bigger();
	return 0;
}