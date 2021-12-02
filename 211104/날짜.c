#include <stdio.h>

int main(void)
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int k = 1; k < 13; k++) {
		printf("%d월은 %d일까지 있습니다.\n", k, days[k-1]);
	}
	return 0;
}