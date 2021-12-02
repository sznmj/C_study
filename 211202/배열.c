#include <stdio.h>

int rev(int* ptr);

int rev(int* ptr)
{
	for (int i = 4; i >= 0; i--) {
		printf("%d ", ptr[i]);
	}
}

int main(void)
{
	int a[5];

	printf("5개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

	rev(a);

	return 0;
}