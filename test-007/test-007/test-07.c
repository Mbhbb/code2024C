#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

//      宏的名称  宏体
#define ADD(x,y) ( x>y ? 1:0)
//标识符常量
#define MAX 100

//定义一个结构体
struct Stu
{
	char name[10];
	int age;
	char stuNo[12];
};


void print( struct Stu *p)
{
	printf("%s\n", "第二种输出方式");
	printf(" %s\n %d\n %s\n", p->name,p->age,p->stuNo);
	printf("%s\n", "第三种输出方式");
	printf(" %s\n %d\n %s\n", (*p).name, (*p).age, (*p).stuNo);
}

int main()
{
	//定义宏
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	printf("%d\n", c);
	printf("%d\n", MAX);

	//指针
	int* p = &a;
	printf("%p\n", p);
	printf("%lld\n", sizeof(int*));
	*p = 30;
	printf("%d\n", a);
	
	//结构体
	struct Stu s = { "张三",18,"0012356" };
	printf("%s\n", "第一种输出方式");
	printf(" %s\n %d\n %s\n", s.name, s.age, s.stuNo);
	print(&s);

	printf("%lld\n", sizeof(long));
	return 0;

}