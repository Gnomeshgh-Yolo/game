#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//#define MAXS 10
//
//void Shift(char s[])
//{
//	char a[3];
//	int i, j;
//	for (i = 0; i < 3; i++)
//		a[i] = s[i];
//	for (i = 3; s[i]; i++)
//		s[i - 3] = s[i];
//	for (j = i - 3, i = 0; i < 3; i++)
//		s[j++] = a[i];
//}
//
//void GetString(char s[]); /* 实现细节在此不表 */
//{
//int main()
//{
//	char s[MAXS];
//
//	GetString(s);
//	Shift(s);
//	printf("%s\n", s);
//
//	return 0;
//}
//
///* 你的代码将被嵌在这里 */

//# include<stdio.h>
//int Bsearch(int *p, int n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (*p == x)
//		{
//			return i;
//		}
//		p++;
//	}
//	return -1;
//	
//}
//int main(void)
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int x, m;
//	scanf("%d", &x);
//	m = Bsearch(a, 10, x);
//	if (m >= 0)
//		printf("Index is %d\n", m);
//	else
//		printf("Not Found\n");
//
//	return 0;
//}
//#include <stdio.h>
//void reOut(int(*p)[3])
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%3d", p[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%3d", p[j][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i, j, a[2][3], (*p)[3];
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	p = a;
//	reOut(p);
//}


//#include  <stdio.h>
//void fun(char  *s, char  *t)
//{
//	
//	int i, d;
//	d = strlen(s);
//	for (i = 0; i < d; i++)
//		t[i] = s[i];
//	for (i = 0; i < d; i++)
//		t[d + i] = s[d - i - 1];
//	t[2 * d] = '\0';
//
//}
//int main()
//{
//	char   s[100], t[100];
//	scanf("%s", s);
//	fun(s, t);
//	printf("The result is: %s\n", t);
//	return 0;
//}
//
//
#include<stdio.h>
void max_min(int *p, int max , int min ,int n)
{
	
}
int main()
{
	int max=0, min=999;
	int arr[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	max_min(arr, max, min, n);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
		}
		if (arr[i] <= min)
		{
			min = arr[i];
		}
	}
	printf("max=%d\nmin=%d\n", max, min);
	return 0;
}