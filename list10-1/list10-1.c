
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

	printf("変更するのは[0…x / 1…y] = ");
	scanf("%d", &sw);

	
		int* p;
		if (sw == 0)
			set999(&x);	//pはxを指す
		else
			set999(&y); //pはyを指す

		printf("x = %d\n", x);
		printf("y = %d\n", y);

		printf("もう一度？ [Y : 9 / N : 8]");
		scanf("%d", &retry);
	} while (retry == 9);
	

	return 0;
}