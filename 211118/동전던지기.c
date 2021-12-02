#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mc(int x);

void mc(int x)
{
	srand(time(NULL));

	int coin = rand() % 2;

	if (coin == x) printf("사용자가 이겼습니다.\n");
	else printf("컴퓨터가 이겼습니다.\n");
}

int main(void)
{
	int x;

	while (1) {
		printf("앞(0) 또는 뒤(1)를 선택하세요(종료는 -1) : ");
		scanf_s("%d", &x);

		if (x == -1) break;

		mc(x);
	}


	return 0;
}