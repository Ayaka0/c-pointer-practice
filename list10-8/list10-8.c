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

	puts("3�̐�������͂���B");
	printf("����A�F"); scanf("%d", &a);
	printf("����B�F"); scanf("%d", &b);
	printf("����C�F"); scanf("%d", &c);
	printf("����D�F"); scanf("%d", &d);

	//�\�[�g�̊֐�
	/*sort3(&a, &b, &c);*/
	sort4(&a, &b, &c, &d);

	puts("�����Ƀ\�[�g���܂����B");
		printf("����A��%d�ł��B\n", a);
		printf("����B��%d�ł��B\n", b);
		printf("����C��%d�ł��B\n", c);
		printf("����D��%d�ł��B\n", d);
}