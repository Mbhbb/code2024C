#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>

void test01(){

	//char arr2[4] = { "cdef" };
	//char arr3[4] = { "cdef" };
	//  �������һ���ӣ�������һ���ַ�����ʱ�����Ǹ����˸�����ռ�Ϊ4
	//���ֽڣ��ַ�����cdef��ռ����4���ֽڵĿռ䣬���������Զ����ַ�����
	//ĩβ����һ��\0����ʾ����ַ�������ֹ��
	//  
	// 1.ʹ��memcmp���Ƚ��ַ����Ƿ����ʱ��������\0�Ĵ��ڣ���Ϊmemcmp��ͨ��
	//�ڴ����ָ���ÿ���ַ��Ƿ�������жϣ�Ҳ����ָ�����Ǹ��ַ������ַ���ʼ
	//�ȽϺ����n���ַ���
	// 
	//  2.ʹ��strcmpʱ�ͻ����һ���ǳ����ص�bug��strcmp��Ҫͨ��\0���ж������ַ�����
	//���ȣ����ʹ��char arr[4] = {"abcd"};���ַ�ʽ����ʼ���ַ����Ļ����ڴ�ָ��
	//����Ϊ������ĩβ����һ��\0��strcmp�����ͻ�����Ƚ��ַ��������ڴ��е�δ֪����
	//ֱ������\0�Ż���ֹ���Ͳ���õ�������Ҫ�����ݡ�
	//  
	//  3.ʹ��strncmp����ʱ��memcmp������࣬strncmp��������ָ�����ǱȽϵĸ���������
	//�Ϳ�����Ч�ı��������������Ƚ�

	char arr1[11] = { "abcdefghij" };
	char arr2[5] = { "cdef" };
	char arr3[5] = { "cdef" };

	int i = memcmp(arr1+2, arr2, 4);
	int j = memcmp(arr1, arr3, 4);
	int k = memcmp(arr3, arr2, 4);

	printf("���㲻��ͬ %d %d %d\n", i, j, k);//0 -1 0

	int a = strcmp(arr1, arr2);
	int b = strcmp(arr1, arr3);
	int c = strcmp(arr2, arr3);

	printf("���㲻��ͬ %d %d %d\n", a, b, c);//-1 -1 0

	int x = strncmp(arr1+2, arr2,2);
	int y = strncmp(arr1, arr3,2);
	int z = strncmp(arr2, arr3,2);

	printf("���㲻��ͬ %d %d %d\n", x, y, z);//0 -1 0

}

void test02() {

	char arr1[5] = { 'a','b','c','d'};

	printf("����ǰ��%s\n", arr1);

	strcpy(arr1, "1234");
	printf("������%s\n", arr1);

	strncpy(arr1, "000000", 2);
	printf("strncpy������%s\n", arr1);

	memcpy(arr1, "This is copy",4);
	printf("memcpy������%s\n", arr1);

	char arr2[10] = { "abcdefg" };
	memmove(arr2+2, arr2, 2);
	printf("memmove�ص�������%s\n", arr2);
}

void test03() {

	char arr1[10] = { "abcdefabc" };

	char * ret = strstr(arr1, "b");
	printf("��һ�γ���b��λ�ã�%s\n", ret);

	char arr2[20] = { "abc#bcd#def" };
	char* token;

	token = strtok(arr2, "#");
	int i = 1;
	while (token != NULL) {
		printf("�ָ��%d %s\n",i++, token);
		token = strtok(NULL, "#");
	}

	char arr3[20] = { "This is memset!" };

	memset(arr3, '#', 4);
	printf("����ǰ4���ֽ�Ϊ#��%s\n", arr3);
}



int main() {
	
	
	//strcmp �Ƚ�ֵ�Ƿ����
	//memcmp �Ƚ�����ֵ�Ƿ���ȣ�ͨ���ڴ�һ���ֽ�һ���ֽڵıȽ�
	//strncmp ���Ƚ�n���ֽ�
	test01();
	//strcpy ����
	//strncpy ��࿽��n���ֽ�
	//memcpy ͨ���ڴ濽��
	//memmove ͨ���ڴ濽�����ص��ַ�ʱ����ȫ
	test02();
	//strstr �����ַ�����һ�γ��ֵ�n��λ��
	//strtok �ֽ��ַ���
	//memset ��ָ����ֵ��ֵ���ڴ������n���ֽ���
	test03();

	return 0;
}