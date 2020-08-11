#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n, t = 0;
//	int arr[201];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 1; j < n; j++)
//		{
//			if (arr[j] <= arr[j - 1])
//			{
//				t = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}
//int main()
//{
//	int i;
//	int sum;
//	scanf("%d", &i);
//	sum = Fib(i);
//	sum %= 1007;
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			for (int k = 0; k < 2; k++)
//			{
//				for (int l = 0; l < 2; l++)
//				{
//					for (int m = 0; m < 2; m++)
//					{
//						printf("%d%d%d%d%d\n", i, j, k, l, m);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int A, B;
//	scanf("%d%d", &A, &B);
//	printf("%d", A + B);
//	return 0;
//}