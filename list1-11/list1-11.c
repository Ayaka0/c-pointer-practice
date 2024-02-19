#include<stdio.h>

int main(void)
{
	int size1, size2, size3;

	printf("整数値を３つ入力してください\n");

	scanf("%d%d%d", &size1, &size2, &size3);

	//可変長配列の宣言
	int array1[size1];
	int array2[size2][size3];

	//可変長配列に適当に値を代入する
	int i;
	for (i = 0; i < size1; i++) {
		array1[i];
	}
	int j;
	for (i = 0; i < size2; i++) {
		for (j = 0; j < size3; j++) {
			array2[i][j] = i * size3 + j;
		}
	}

	//代入された値を表示する
	for (i = 0; i < size1; i++) {
		printf("array1[%d]..%d\n", i, array1[i]);
	}
	for (i = 0; i < size2; i++) {
		for (j = 0; j < size3; j++) {
			printf("\t%d", array2[i][j]);
		}
		printf("\n");
	}

	printf("sizeog(array1)..%zd\n", sizeof(array1));
	printf("sizeog(array2)..%zd\n", sizeof(array2));

	return 0;
}