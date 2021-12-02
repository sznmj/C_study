#include <stdio.h>

void draw_stars(void);

void draw_stars(void)
{
	printf("******************************\n");
}

int main(void)
{
	draw_stars();
	printf("Hello World!\n");
	draw_stars();

	return 0;
}