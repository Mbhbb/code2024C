#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>

void test01(){

	//char arr2[4] = { "cdef" };
	//char arr3[4] = { "cdef" };
	//  这里存在一个坑，当创建一个字符数组时，我们给定了该数组空间为4
	//个字节，字符串‘cdef’占用了4个字节的空间，而不会再自动往字符串的
	//末尾补上一个\0来表示这个字符串的终止。
	//  
	// 1.使用memcmp来比较字符串是否相等时不用在意\0的存在，因为memcmp是通过
	//内存的中指向的每个字符是否相等来判断，也可以指定从那个字符串的字符开始
	//比较后面的n个字符。
	// 
	//  2.使用strcmp时就会出现一个非常严重的bug，strcmp需要通过\0来判断两个字符串的
	//长度，如果使用char arr[4] = {"abcd"};这种方式来初始化字符串的化，内存指向
	//不会为我们在末尾补上一个\0那strcmp函数就会继续比较字符串后面内存中的未知数据
	//直到遇到\0才会终止，就不会得到我们想要的数据。
	//  
	//  3.使用strncmp函数时和memcmp函数差不多，strncmp函数可以指定我们比较的个数，这样
	//就可以有效的避免继续的往后面比较

	char arr1[11] = { "abcdefghij" };
	char arr2[5] = { "cdef" };
	char arr3[5] = { "cdef" };

	int i = memcmp(arr1+2, arr2, 4);
	int j = memcmp(arr1, arr3, 4);
	int k = memcmp(arr3, arr2, 4);

	printf("非零不相同 %d %d %d\n", i, j, k);//0 -1 0

	int a = strcmp(arr1, arr2);
	int b = strcmp(arr1, arr3);
	int c = strcmp(arr2, arr3);

	printf("非零不相同 %d %d %d\n", a, b, c);//-1 -1 0

	int x = strncmp(arr1+2, arr2,2);
	int y = strncmp(arr1, arr3,2);
	int z = strncmp(arr2, arr3,2);

	printf("非零不相同 %d %d %d\n", x, y, z);//0 -1 0

}

void test02() {

	char arr1[5] = { 'a','b','c','d'};

	printf("拷贝前：%s\n", arr1);

	strcpy(arr1, "1234");
	printf("拷贝后：%s\n", arr1);

	strncpy(arr1, "000000", 2);
	printf("strncpy拷贝后：%s\n", arr1);

	memcpy(arr1, "This is copy",4);
	printf("memcpy拷贝后：%s\n", arr1);

	char arr2[10] = { "abcdefg" };
	memmove(arr2+2, arr2, 2);
	printf("memmove重叠拷贝：%s\n", arr2);
}

void test03() {

	char arr1[10] = { "abcdefabc" };

	char * ret = strstr(arr1, "b");
	printf("第一次出现b的位置：%s\n", ret);

	char arr2[20] = { "abc#bcd#def" };
	char* token;

	token = strtok(arr2, "#");
	int i = 1;
	while (token != NULL) {
		printf("分割第%d %s\n",i++, token);
		token = strtok(NULL, "#");
	}

	char arr3[20] = { "This is memset!" };

	memset(arr3, '#', 4);
	printf("重置前4个字节为#：%s\n", arr3);
}



int main() {
	
	
	//strcmp 比较值是否相等
	//memcmp 比较两个值是否相等，通过内存一个字节一个字节的比较
	//strncmp 最多比较n个字节
	test01();
	//strcpy 拷贝
	//strncpy 最多拷贝n个字节
	//memcpy 通过内存拷贝
	//memmove 通过内存拷贝，重叠字符时更安全
	test02();
	//strstr 查找字符串第一次出现的n的位置
	//strtok 分解字符串
	//memset 将指定的值赋值到内存区域的n个字节中
	test03();

	return 0;
}