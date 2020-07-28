#include<stdio.h>
#include<stdlib.h>
void tiao_xu(const int* ret )
{
	assert(*ret != 'NULL');
	int arr2[10] = { 0 };
	int ji = 0;
	int ou = 9;
	for (int i = 0; i <= 9; i++)
	{
		if (*ret % 2 != 0)
		{
			arr2[ji] = *ret;
			ji++;
		}
		else
		{
			arr2[ou] = *ret;
			ou--;
		}
		ret += 1;
	}
	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", arr2[i]);
	}

}
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	tiao_xu(arr1);
	system"pause";
}