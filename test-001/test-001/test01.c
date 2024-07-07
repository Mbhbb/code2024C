#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>


extern int a;

void test01(){

	int b = 20;
	printf("b=%d\n", b); 
}

int main()
{
	test01();
	printf("hellow word! 孟保华\n");
	printf("a=%d\n", a);

	int c = 0;
	int d = 0;

	scanf("%d %d", &c,&d);
	int num = c + d;
	printf("求和=%d\n",num);

	return 0;
}