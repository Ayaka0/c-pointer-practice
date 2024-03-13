#include<stdio.h>

void adjust_score(int *n)
{
	if (*n < 0) *n = 0;
	if (*n > 100) *n = 100;
}

int main(void) {

	int score;

	do {
		printf("テストの点数：");
		scanf("%d", &score);

		adjust_score(&score);
		printf("点数は%d点です。\n", score);

	} while (score < 0 || score > 100);

	return 0;

}