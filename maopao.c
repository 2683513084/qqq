#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[], int sz)//或void bubble_sort(int* arr, int sz)
{//趟数
	int a = 0;
	for (a = 0; a < sz - 1; a++)
	{   //一趟冒泡排序
		int b = 0;
		for (b = 0; b < sz - 1 - a; b++)
		{
			if (arr[b] > arr[b + 1])
			{  // 交换
				int c = arr[b];
				 arr[b] = arr[ b+ 1];
				 arr[b + 1] = c;

			}
		}
	}
}
int main()
{   //将数组数据从小到大排序
	int i = 0;
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//冒泡排序的算法进行排序
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
		
	return 0;

}

	
