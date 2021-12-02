#include <stdio.h>

void save(int amount);

void save(int amount)
{
	static int money;

	money += amount;

	printf("지금까지의 저축액은 %d입니다.\n", money);
}

int main(void)
{
	int amount = 0;

	while (1) {
		printf("얼마를 저축하시겠습니까?(종료는 -1) : ");
		scanf_s("%d", &amount);
		
		if (amount == -1) break;

		save(amount);
	}

	return 0;
}