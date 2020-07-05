#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void find(int arr[10])
{
	int a = 0;
	int b = 0;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		count = 0;
		for (int j = (i+1); j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 0)
		{
			printf("%d", arr[i]);
		}
	}
}
int main()
{
	int arr[10] = { 2, 3, 4, 4, 5, 5, 6, 6, 7, 7 };
	find(arr)
}