#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>


int swap01(const void* elem1, const void* elem2)
{
	return (*(int*)elem1 - *(int*)elem2);
}

void test01() 
{
	int arr[10] = { 0,1,3,6,8,9,7,4,2,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), swap01);
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
//Ã°ÅÝÅÅÐò

void b_sort(int arr[], int sz)
{
	int i = 0, j = 0, flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void ex(char* elem1, char* elem2, int size)
{
	int i = 0;
	for ( i = 0; i < size; i++)
	{
		char temp = *elem1;
		*elem1 = *elem2;
		*elem2 = temp;
		elem1++;
		elem2++;
	}
}

int swap02(const void*e1,const void*e2)
{
	return ( *(int*)e1 - *(int*)e2 );
}


//»ùÓÚÃ°ÅÝÅÅÐòÊµÏÖµÄÅÅÐò
void bb_sort(void*base,int len,int b_width,int (*swp)(const void*e1,const*e2))
{
	int i = 0, j = 0, flag = 1;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (swp( (char*)base + j*b_width , (char*)base + (j+1) * b_width ) > 0 )
			{
				ex( (char*)base + j * b_width, (char*)base + (j + 1) * b_width, b_width );
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main() 
{
	int arr[10] = { 1,3,5,9,8,4,2,0,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//test01();
	//b_sort(arr, sz);
	bb_sort(arr, sz, sizeof(arr[0]), swap02);
	int i = 0;
	for ( i = 0; i < 10; i++)
	{ 
		printf("%d ", arr[i]);
	}

	return 0;
}