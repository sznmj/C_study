#include <stdio.h>

int prime(int x);

int prime(int x)
{
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	for (int j = 2; j < 101; j++) {
		if (prime(j) == 1) printf("%d ", j);
	}
	
	return 0;
}