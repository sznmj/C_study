#include <stdio.h>
#define TEST 3
#define STUDENT 3

int main(void)
{
	int stu[STUDENT][TEST] = { {30,10,11}, {40,90,32}, {70,65,56} };
	int sum = 0;

	for (int k = 0; k < STUDENT; k++) {
		for (int i = 0; i < TEST; i++) {
			sum += stu[k][i];
		}
		printf("%d번 학생의 평균 점수는 %d점 입니다. \n", k + 1, sum / TEST);
		sum = 0;
	}
	return 0;

}