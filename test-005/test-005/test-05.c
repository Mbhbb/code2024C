#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	//�����
	auto int a = 7;
	int b = 2;
	int num01 = a + b;//��
	int num02 = a - b;//��
	int num03 = a * b;//��
	int num04 = a / b;//��
	int num05 = a % b;//ȡģ

	printf("%d %d %d %d %d\n", num01, num02, num03, num04,num05);
	float num06 = 7.0 / 2;
	printf("%0.1f\n", num06);

	int i = 0;
	if (i)//i ����ȷ��i=3 ��ȷ��i==0��ȷ�� 
	{
		printf("��ȷ\n");
	}
	else
	{
		printf("����ȷ\n");
	}

	int j = 0;
	int k = 0;
	if (j && k) {
		printf("��ȷ\n");
	}
	else
	{
		printf("����ȷ\n");
	}

	if (j || k) {
		printf("��ȷ\n");
	}
	else
	{
		printf("����ȷ\n");
	}

	return 0;
}