#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void N_sort(int arr[], int count)
{
	//ц╟ещеепР
	int i = 0;
	int j = 0;
	int ret = 0;
	for ( i = 0; i < count-1; i++)
	{
		for ( j = 0; j  < count - 1 -i ; j ++)
		{
			if (arr[j] > arr[j + 1])
			{
				int ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
}

int main()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 6,4,8,2,1,3,5,7,9,0 };
	int sz = sizeof(arr) / sizeof(int);
	N_sort(arr, sz);
	for (size_t i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}