#define _CRT_SECURE_NO_WARNINGS 1
//查找指定字符
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char flag;
//	char arr[80];
//	int ret = 0;
//	int index=0;
//	int count = 0;
//	scanf("%c", &flag);
//	scanf("%s", arr);
//	ret = strlen(arr);
//	for (int i = 0; i <= ret; i++)
//	{
//		if (arr[i] == flag)
//		{
//			count++;
//			index = i;
//		}
//	}
//	if (count == 0)
//	{
//		printf("Not Found");
//	}
//	else
//	{
//		printf("index = %d", index);
//	}
//}
//穷举搬砖法
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int cnt_m = 0;
//	int cnt_w = 0;
//	float cnt_c = 0;
//	int count = 0;
//	for (cnt_m = 0; cnt_m <= n; cnt_m++)
//	{
//		for (cnt_w = 0; cnt_w <= n; cnt_w++)
//		{
//			for (cnt_c = 0; cnt_c <= n; cnt_c++)
//			{
//				if ((cnt_m + cnt_w + cnt_c == n) && (cnt_m * 3 + cnt_w * 2 + cnt_c*0.5 == n))
//				{
//					count++;
//					printf("men = %d, women = %d, child = %.0f\n", cnt_m, cnt_w, cnt_c);
//				}
//			}
//		}
//	}
//	if (count == 0)
//	{
//		printf("None");
//	}
//}
//7-3 计算职工工资 (15分)
//#include <stdio.h>
//
//typedef struct people
//{
//	char name[100];
//	float basic;
//	float floating;
//	float pay;
//	float  sum;
//}PEOPLE;
//
//int main()
//{
//	PEOPLE s[10000];
//	int i, n, j;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%s", &s[i].name);
//		scanf("%f", &s[i].basic);
//		scanf("%f", &s[i].floating);
//		scanf("%f", &s[i].pay);
//		s[i].sum = (s[i].basic + s[i].floating) - s[i].pay;
//	}
//	for (j = 0; j<n; j++)
//	{
//		printf("%s %.2f\n", s[j].name, s[j].sum);
//	}
//	return 0;
//}
//7-4 求集合数据的均方差 (15分)
//#include <stdio.h>
//#include <math.h>
//// 2-05. 求集合数据的均方差（15）
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	if (n>10000)
//		return 0;
//	int a[10000] = { 0 };
//	double sum = 0;
//	double avg = 0;
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d", &a[i]);
//		sum += a[i];
//	}
//	avg = sum / n;
//	sum = 0;
//	for (int i = 0; i<n; i++)
//	{
//		sum += (a[i] - avg) * (a[i] - avg);
//	}
//	double res = 0;
//	res = sqrt(sum / n);
//	printf("%.5f", res);
//	return 0;
//}
//构造矩阵
#include<stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int n;
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		arr[0][i] = 1;
		arr[i][0] = 1;
		arr[n-1][i] = 1;
		arr[i][n-1] = 1;
	}
	int right = (n-1);
	int left = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i][left] = 2;
		arr[i][right] = 2;
		left++;
		right--;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
