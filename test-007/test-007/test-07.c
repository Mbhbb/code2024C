#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

//      �������  ����
#define ADD(x,y) ( x>y ? 1:0)
//��ʶ������
#define MAX 100

//����һ���ṹ��
struct Stu
{
	char name[10];
	int age;
	char stuNo[12];
};


void print( struct Stu *p)
{
	printf("%s\n", "�ڶ��������ʽ");
	printf(" %s\n %d\n %s\n", p->name,p->age,p->stuNo);
	printf("%s\n", "�����������ʽ");
	printf(" %s\n %d\n %s\n", (*p).name, (*p).age, (*p).stuNo);
}

int main()
{
	//�����
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	printf("%d\n", c);
	printf("%d\n", MAX);

	//ָ��
	int* p = &a;
	printf("%p\n", p);
	printf("%lld\n", sizeof(int*));
	*p = 30;
	printf("%d\n", a);
	
	//�ṹ��
	struct Stu s = { "����",18,"0012356" };
	printf("%s\n", "��һ�������ʽ");
	printf(" %s\n %d\n %s\n", s.name, s.age, s.stuNo);
	print(&s);

	printf("%lld\n", sizeof(long));
	return 0;

}