#include <stdio.h>

int get_divisor(int x);

int get_divisor(int x)
{
	printf("%d의 약수 = ", x);

	for (int i = 1; i < x + 1; i++) {
		if (x % i == 0) printf("%d ", i);
	}
}

int main(void)
{
	get_divisor(8);

	return 0;
}