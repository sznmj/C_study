#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int dice[6] = { 0 };
	int num;

	srand(time(NULL));

	for (int i = 0; i < 60000; i++) {
		num = rand() % 6;
		dice[num]++;
	}
	
	printf("========================\n");
	printf("주사위면          빈도\n");
	printf("========================\n");
	
	for (int j = 0; j < 6; j++) {
		printf("%   d          %d\n", j, dice[j]);
	}
	return 0;

}

