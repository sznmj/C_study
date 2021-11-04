#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char board[3][3];
	int x, y;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y]= ' ';

	srand(time(NULL));

	for (int k = 1; k < 10; k++) {
		if (k % 2 == 0) {
			x = rand() % 3;
			y = rand() % 3;
			if ((board[x][y] == 'O') || (board[x][y] == 'X')) {
				k--;
				continue;
			}
			board[x][y] = 'O';
		}
		else {
			printf("(x, y) ÁÂÇ¥ : ");
			scanf_s("%d %d", &x, &y);
			if ((board[x][y] == 'O') || (board[x][y] == 'X')) {
				k--;
				continue;
			}
			board[x][y] = 'X';
		}

		for (int i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
	}
	return 0;
}