#include<stdio.h>

void adjust_score(int *n)
{
	if (*n < 0) *n = 0;
	if (*n > 100) *n = 100;
}

int main(void) {

	int score;

	do {
		printf("�e�X�g�̓_���F");
		scanf("%d", &score);

		adjust_score(&score);
		printf("�_����%d�_�ł��B\n", score);

	} while (score < 0 || score > 100);

	return 0;

}