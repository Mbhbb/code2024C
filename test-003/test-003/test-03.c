#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	//�ж����

	int i = 0;
	printf("%s\n", "��ѡ��");
	scanf("%d", &i);
	if (i == 1)
	{
		printf("%s\n","����������offer");
		//ѭ�����
		int count = 0;
		while (count < 100) {
			count++;
			printf("%s %d %s\n", "��", count, "��");
		}
		if (count >= 100) {
			printf("%s\n", "������������");
		}
	}
	else
	{
		printf("%s\n", "ֱ��������");
	}

	

	return 0;
}