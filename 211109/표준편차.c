#include <stdio.h>
#include <math.h>

int main(void)
{
	double num[5];
	double ave, stan = 0;

	for (int i = 0; i < 5; i++) {
		printf("실수를 입력하세요 : ");
		scanf_s("%lf", &num[i]);
	}

	ave = (num[0] + num[1] + num[2] + num[3] + num[4]) / 5;
	printf("평균 : %lf\n", ave);

	for (int j = 0; j < 5; j++) {
		stan += (num[j] - ave) * (num[j] - ave);
	}

	printf("표준편차 : %lf", sqrt(stan / 5));
	return 0;
}   