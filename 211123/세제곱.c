#include <stdio.h>
#include <math.h>

int three(int x);

int three(int x)
{
	int result = 0;

	if (x < 1) return result;
	else result += (int)pow(x, 3) + three(x - 1);
}
int main(void)
{
	int x;
	
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &x);
	
	printf("%d", three(x));

	return 0;
}