#include <stdio.h>
#include <math.h>

int ipower(int n, int k);

int ipower(int n, int k)
{
	for (int i = 0; i < k + 1; i++) {
		printf("%d\n", (int)pow(n, i));
	}
}
int main(void)
{
	ipower(3, 5);
	return 0;
}