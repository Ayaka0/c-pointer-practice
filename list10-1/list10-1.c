
#include<stdio.h>

void set999(int* p)
{
	*p = 999;
}

int main(void)
{

	int retry;
	do {
	int x = 123;
	int y = 456;
	int sw;
	
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	printf("�ύX����̂�[0�cx / 1�cy] = ");
	scanf("%d", &sw);

	
		int* p;
		if (sw == 0)
			set999(&x);	//p��x���w��
		else
			set999(&y); //p��y���w��

		printf("x = %d\n", x);
		printf("y = %d\n", y);

		printf("������x�H [Y : 9 / N : 8]");
		scanf("%d", &retry);
	} while (retry == 9);
	

	return 0;
}