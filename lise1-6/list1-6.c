#include<stdio.h>


void get_xy(double* x_p, double *y_p)
{
	/*������x_p, y_p�̒l�ƃA�h���X��\������B*/
	printf("x_p..%p, y_p..%p\n", (void*)x_p, (void*)y_p);
	printf("&x_p..%p, &y_p//%p\n", (void*)&x_p, (void*)&y_p);

	/*�����œn���ꂽ�A�h���X�ɁA�l���i�[������B*/
	*x_p = 1.0;
	*y_p = 2.0;
}




int main(void)
{
	double x;
	double y;

	/*�ϐ�x,y�̃A�h���X��\������*/
	printf("&x..%p, &y..%p\n", (void*)&x, (void*)&y);

	/*
	* �����Ƃ��ĕϐ�x,y�̃A�h���X�n���A
	* get_xy()���ŁA���̃A�h���X�ɒl���i�[���Ă��炤�B
	*/

	get_xy(&x, &y);

	/*�󂯎�����l��\������B*/
	printf("x..%f, y..%f\n", x, y);

	return 0;
}