#include <stdio.h>

int fibonacci(int n);

int fibonacci(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;

	if (n < 0) return 0;
	else return fibonacci(n - 1) + fibonacci(n - 2);

}

int main(void)
{
	int x;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &x);

	printf("%d\n", fibonacci(x));
	return 0;
}