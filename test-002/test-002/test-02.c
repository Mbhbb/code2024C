#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>



#define MAX 300
#define STR "abc"

enum Season
{
	SPRING,
	SUMMER,
	AUTUMN,
	WINTER
};
int main()
{
	const int a = 200;

	/*enum Season b = SPRING;
	enum Season c = SUMMER;
	enum Season d = AUTUMN;
	enum Season e = WINTER;*/
	
	enum Season b, c, d, e;
	b = SPRING;
	c = SUMMER;
	d = AUTUMN;
	e = WINTER;
	printf("%s\n", "����");
	printf("��һ�ֳ�����");
	printf("%d\n", 100);
	printf("�ڶ��ֳ�����������");
	printf("%d\n",a);
	printf("�����ֳ�������ʶ������");
	printf("%d %s\n", MAX,STR);
	printf("�����ֳ�����ö�ٳ���");
	printf("%d %d %d %d \n", b,c,d,e);

	char str01[] = "abcdef";
	/*char str02[] = { 'a','b','c','d','e','f'};*/
	char str02[10] = { 'a','b','c','d','e','f'};
	printf("%s\n", str01);
	printf("%d\n", strlen(str01));
	printf("%s\n", str02);
	printf("%d\n\n", strlen(str02));

	//ת���
	printf("%s\n", "ת���");
	printf("%s %s %s\n","\\n","\\t","\\r");
	printf("%d\n",strlen("\62"));
	printf("%s\n","\162");
	printf("%s\n","abcd\tef");
	printf("\a");



	return 0;
}