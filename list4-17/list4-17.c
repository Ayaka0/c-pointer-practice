#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int size;

	printf("board size?");
	scanf("%d", &size);

	/*size x size��2�����z����m��*/
	int(*board)[size] = malloc(sizeof(int) * size * size);

	/*2�����z��ɓK���ɒl��������*/
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			board[i][j] = i * size + j;
		}
	}

	/*��������l��\��*/
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%2d, ", board[i][j]);
		}
		printf("\n");
	}
}