#include<stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

 /*void sort3(int* n1, int* n2, int* n3)
{
	if (*n1 > *n2) swap(n1, n2);
	if (*n2 > *n3) swap(n2, n3);
	if (*n1 > *n2) swap(n1, n2);
}
*/

void sort4(int* n1, int* n2, int* n3, int *n4)
{
	if (*n1 > *n2) swap(n1, n2);
	if (*n2 > *n3) swap(n2, n3);
	if (*n3 > *n4) swap(n3, n4);
	if (*n2 > *n3) swap(n2, n3);
	if (*n1 > *n2) swap(n1, n2);

}

int main(void)
{
	int a, b, c,d;

	puts("3つの整数を入力せよ。");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);
	printf("整数C："); scanf("%d", &c);
	printf("整数D："); scanf("%d", &d);

	//ソートの関数
	/*sort3(&a, &b, &c);*/
	sort4(&a, &b, &c, &d);

	puts("昇順にソートしました。");
		printf("整数Aは%dです。\n", a);
		printf("整数Bは%dです。\n", b);
		printf("整数Cは%dです。\n", c);
		printf("整数Dは%dです。\n", d);
}