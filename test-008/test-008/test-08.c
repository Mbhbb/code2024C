#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main() {

	//getchar
	/*int c;
	printf("�������ַ�");
	c = getchar();

	printf("������ַ�");
	putchar(c);*/

	char pas[6];
	printf("���������룺");
	scanf("%s", &pas);
	getchar();
	printf("��ȷ������('Y'or'N')��");
	char c = getchar();
	if (c == 'Y')
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	
	




	//��֧��� if & switch
	//int a = 0;
	//scanf("%d", &a);
	//if (a >= 18 || a<60){
	//	printf("%s\n", "������");
	//}
	//else if (0 < a || a < 18) {
	//	printf("%s\n", "δ������");
	//}
	//else if (a >= 60) {
	//	printf("%s\n", "������");
	//}
	//else
	//{
	//	printf("%s\n", "�������");
	//}


	////switchѡ�����
	//int b = 0;
	//scanf("%d", &b);
	//switch (b) {
	//	case 1:
	//		printf("%s\n", "����һ");
	//		break;
	//	case 2:
	//		printf("%s\n", "���ڶ�");
	//		break;
	//	case 3:
	//		printf("%s\n", "������");
	//		break;
	//	case 4:
	//		printf("%s\n", "������");
	//		break;
	//	case 5:
	//		printf("%s\n", "������");
	//		break;
	//	case 6:
	//		printf("%s\n", "������");
	//		break;
	//	case 7:
	//		printf("%s\n", "������");
	//		break;
	//	default:
	//		printf("%s\n", "�������");

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