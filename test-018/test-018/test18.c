#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>


struct stu {
	char name[10];
	int age;
	char sex[5];
};

void toString(struct stu* stu)
{
	printf("%s %d %s\n", stu->name, stu->age, stu->sex);
}

int main()
{
	struct stu s10 = { "����",18,"��" };
	toString(&s10);
	return 0;
}