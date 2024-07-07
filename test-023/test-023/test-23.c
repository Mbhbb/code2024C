#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

//指向 函数指针数组 的指针

int test01(int x, int y) {
	return x + y;
}

int test02(int x, int y) {
	return x - y;
}

int test03(int x, int y) {
	return x * y; 
}

//定义一个函数指针
typedef void (*pf)();

int main(){

	int ret = 0;
	int (*arr[3])(int, int)  = { test01,test02,test03 };

	int (*(*parr)[3])(int, int) = &arr;
	ret = (*parr)[0](3, 3);
	printf("%d", ret);
	return 0;
}