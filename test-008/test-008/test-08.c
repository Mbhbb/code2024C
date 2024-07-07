#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main() {

	//getchar
	/*int c;
	printf("请输入字符");
	c = getchar();

	printf("请输出字符");
	putchar(c);*/

	char pas[6];
	printf("请输入密码：");
	scanf("%s", &pas);
	getchar();
	printf("请确认密码('Y'or'N')：");
	char c = getchar();
	if (c == 'Y')
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	
	




	//分支语句 if & switch
	//int a = 0;
	//scanf("%d", &a);
	//if (a >= 18 || a<60){
	//	printf("%s\n", "成年人");
	//}
	//else if (0 < a || a < 18) {
	//	printf("%s\n", "未成年人");
	//}
	//else if (a >= 60) {
	//	printf("%s\n", "老年人");
	//}
	//else
	//{
	//	printf("%s\n", "输入错误！");
	//}


	////switch选择语句
	//int b = 0;
	//scanf("%d", &b);
	//switch (b) {
	//	case 1:
	//		printf("%s\n", "星期一");
	//		break;
	//	case 2:
	//		printf("%s\n", "星期二");
	//		break;
	//	case 3:
	//		printf("%s\n", "星期三");
	//		break;
	//	case 4:
	//		printf("%s\n", "星期四");
	//		break;
	//	case 5:
	//		printf("%s\n", "星期五");
	//		break;
	//	case 6:
	//		printf("%s\n", "星期六");
	//		break;
	//	case 7:
	//		printf("%s\n", "星期日");
	//		break;
	//	default:
	//		printf("%s\n", "输入错误");

	//}

	//int n = 1;
	//int m = 2;
	//switch (n) {
	//	case 1:
	//		n++;
	//		m++;
	//	case 2:
	//		switch (m){
	//			case 1:
	//				n++;
	//				break;
	//		}
	//	case 3:
	//		m++;
	//	case 4:
	//		printf("%d %d\n", n, m);
	//		break;
	//}





	return 0;
}