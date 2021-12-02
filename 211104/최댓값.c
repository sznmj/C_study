#include <stdio.h>

int main(void)
{
	int gugu[][];
	int x, y;

	for (x = 1; i < 10; i++) {
		for (y = 1; j < 10; j++) {
			gugu[x][y] = x * y;
		}
	}

	printf("알고싶은 구구단을 입력하세요(예 : 9 3) : ");
	scanf_s("%d %d", &x, &y);

	printf("%d X %d = %d", x, y, gugu[x][y]);
	return 0;
}