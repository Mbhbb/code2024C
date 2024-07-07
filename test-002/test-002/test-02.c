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
	printf("%s\n", "常量");
	printf("第一种常量：");
	printf("%d\n", 100);
	printf("第二种常量：常变量");
	printf("%d\n",a);
	printf("第三种常量：标识符常量");
	printf("%d %s\n", MAX,STR);
	printf("第四种常量：枚举常量");
	printf("%d %d %d %d \n", b,c,d,e);

	char str01[] = "abcdef";
	/*char str02[] = { 'a','b','c','d','e','f'};*/
	char str02[10] = { 'a','b','c','d','e','f'};
	printf("%s\n", str01);
	printf("%d\n", strlen(str01));
	printf("%s\n", str02);
	printf("%d\n\n", strlen(str02));

	//转义符
	printf("%s\n", "转义符");
	printf("%s %s %s\n","\\n","\\t","\\r");
	printf("%d\n",strlen("\62"));
	printf("%s\n","\162");
	printf("%s\n","abcd\tef");
	printf("\a");



	return 0;
}