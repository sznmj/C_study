#include <stdio.h>

int cnt_a=0, cnt_s=0, cnt_m=0, cnt_d=0;
int calc(int x, char c, int y);
int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
int div(int x, int y);

int add(int x, int y) {
	
	cnt_a++;
	printf("덧셈은 총 %d번 호출되었습니다\n", cnt_a);
	printf("연산 결과 : %d + %d = %d\n\n", x, y, x + y);
}

int sub(int x, int y) {

	cnt_s++;
	printf("뺄셈은 총 %d번 호출되었습니다\n", cnt_s);
	printf("연산 결과 : %d - %d = %d\n\n", x, y, x - y);
}

int mult(int x, int y) {

	cnt_m++;
	printf("곱셈은 총 %d번 호출되었습니다\n", cnt_m);
	printf("연산 결과 : %d x %d = %d\n\n", x, y, x * y);
}

int div(int x, int y) {
	
	cnt_d++;
	printf("나눗셈은 총 %d번 호출되었습니다\n", cnt_d);
	printf("연산 결과 : %d / %d = %d\n\n", x, y, x / y);
}

int calc(int x, char c, int y)
{

	switch ((int)c)
	{
	case 43:
		add(x, y);
		return 0;
	case 45:
		sub(x, y);
		return 0;
	case 42:
		mult(x, y);
		return 0;
	case 47:
		div(x, y);
		return 0;
	default:
		printf("제대로 된 식을 입력해주세요\n\n");
		return 0;
	}
}

int main(void)
{
	int x, y;
	char c;

	for (;;) {
		printf("연산을 입력하세요(종료는 Ctrl+C): ");
		scanf_s("%d", &x);
		scanf_s("%c", &c);
		scanf_s("%d", &y);

		calc(x, c, y);
	}
	return 0;
}