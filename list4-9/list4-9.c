#include<stdio.h>
#include<stddef.h>
#include<wchar.h>
#include<locale.h>

int main(void)
{
	//���C�h�����񃊃e����
	wchar_t str[] = L"���{��123��";

	//wchar_t�T�C�Y��\��
	printf("sizeof(wchar_t)..%d\n", (int)sizeof(wchar_t));
	//�z��str�̒�����\��
	printf("str length..%d\n", (int)(sizeof(str) / sizeof(str[0])));

	//str�̓��e���o�͂���
	for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++) {
		printf("str[%d]..%d\n", i, str[i]);
	}

	return 0;
}