#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void test01(int *p)
{
	printf("1.一级指针：%d\n", *p);
}

void test02(int **p)
{
	printf("2.二级指针：%d\n", **p);
}
void test03(int arr[])
{
	int i = 0;
	printf("3.1.数组指针：");
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test04(int *p)
{
	int i = 0;
	printf("3.2.数组指针：");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
}

void test05(int(*p)[3])
{
	int i = 0,j = 0;
	printf("4.1.二维数组指针：");
	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf(" | ");
	}
	printf("\n");
}

void test06(int arr[2][3])
{
	int i = 0, j = 0;
	printf("4.2.二维数组指针：");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf(" | ");
	}
	printf("\n");
}

int Add(int x, int y)
{
	return x + y;
}

void FunPoint(int (*pfun)(int,int),int a,int b)
{
	int num = pfun(a, b);
	printf("%d ", num);
}

//指针进阶
int main()
{
	int a = 2;
	int* pa = &a;
	test01(pa);

	int** ppa = &pa;
	test02(ppa);

	int arr[] = { 1,2,3,4,5 };
	test03(arr);
	test04(arr);

	int arr01[2][3] = { 1,2,3,2,3,4 };
	test05(arr01);
	test06(arr01);

	//函数指针
	printf("%s", "5.函数指针：");
	FunPoint(Add,2,3);

}