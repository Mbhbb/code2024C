#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

//����һ������ָ��
typedef int (*pf)(int, int);


//����ָ��ʵ�ּ�����
void meun()
{
	printf("------------------\n");
	printf("---1.�ӷ�  2.����-\n");
	printf("---3.�˷�  4.����-\n");
	printf("----  0.�˳�  ----\n");
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
	printf("���������֣�");
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
		printf("��ѡ��");
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
			printf("�������");
			break;
		}
	} while (inpute);
	return 0;
}