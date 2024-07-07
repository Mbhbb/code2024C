#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	/*int a = 0;
	char* pc = &a;
	int* pi = &a;
	printf("%p\n", pc+1);
	printf("%p\n", pi+1);*/

	int a = 10;
	int b = 20;
	int c = 30;

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	int* parr[] = { pa,pb,pc };

	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("%d ", *(parr[i]));
	}
	printf("\n");
	int** ppa = &pa;//¶þ¼¶Ö¸Õë 
	**ppa = 60;
	printf("%d ", a);
	return 0;
}