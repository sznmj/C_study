#include <stdio.h>
#include <math.h>

int show_digit(int x);

int show_digit(int x)
{
	if (x < 1) return 0;
	else {
		printf("%d ", x/1000);
		show_digit(x%1000*10);
	}
}

int main(void)
{
	int x;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &x);
	show_digit(x);

	return 0;
}