#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

//定义一个函数指针
typedef int (*pf)(int, int);


//函数指针实现计算器
void meun()
{
	printf("------------------\n");
	printf("---1.加法  2.减法-\n");
	printf("---3.乘法  4.除法-\n");
	printf("----  0.退出  ----\n");
	printf("------------------\n");
}

int jia(int x, int y) 
{
	return x + y;
}

int jian(int x, int y)
{
	return x - y;
}

int chen(int x, int y)
{
	return x * y;
}

int chu(int x, int y)
{
	return x / y;
}

void cale(pf pf)
{
	int x = 0, y = 0, ret = 0;
	printf("请输入数字：");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

int main()
{
	int inpute = 0;
	
	do
	{
		meun();
		printf("请选择：");
		scanf("%d", &inpute);
		
		switch (inpute)
		{
		case 1:
			cale(jia);
			break;
		case 2:
			cale(jian);
			break;
		case 3:
			cale(chen);
			break;
		case 4:
			cale(chu);
			break;
		case 0:
			break;
		default:
			printf("输入错误！");
			break;
		}
	} while (inpute);
	return 0;
}