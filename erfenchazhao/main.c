#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, };
	
	int a = 0;
	
	scanf ("%d", &a);
	
	int b = sizeof(arr) / sizeof(arr[1]);
	
	int left = 0;
	
	int right = b-1;
	
	int c = 0;
	
	while (left <= right)
	{
		c = (left+right)/2;
		
		if (arr[c]<a)
		left = c + 1;
		
		else if(arr[c]>a)
		right = c-1;
		
		else
		{printf ("�ҵ��ˣ��±��ǣ�%d\n", c);
		  break;
		}
		
	}
	
	if (left>right)
	printf ("�Ҳ���\n");
	
	return 0;
}
