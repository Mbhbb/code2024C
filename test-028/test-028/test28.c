#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

//��������
#include <stdio.h>
#include <stdlib.h>

struct S
{
	int n;
	int arr[];
};

int main()
{
	struct S s;
	printf("%d \n", sizeof(s));
	struct S* ret = (struct S*)malloc(sizeof(s) + 40);
	ret->n = 100;
	int i = 0;
	if (ret == NULL)
	{
		return 1;
	}
	for ( i = 0; i < 10; i++)
	{
		ret->arr[i] = i;
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", ret->arr[i]);
	}
	printf("\n");
	//����������չ��С
	struct S* ps = (struct S*)realloc(ret, sizeof(s) + 80);
	if (ps != NULL)
	{
		ret = ps;
		ps = NULL;
	}
	else
	{
		return 1;
	}
	for (i = 0; i < 20; i++)
	{
		ret->arr[i] = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", ret->arr[i]);
	}
	//�ͷ��ڴ�
	//free(ps);���ﲻ���ͷ��ڴ棬��Ϊret==ps������ָ��ָ����ڴ���ͬ��ֻ��Ҫfreeһ�ξ��С�
	free(ret);
	ret = NULL;
	return 0;
}
