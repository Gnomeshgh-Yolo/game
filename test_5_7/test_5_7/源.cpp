#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int a, b, c, d, e;
//	e = num / 1 % 10;
//	d = num / 10 % 10;
//	c = num / 100 % 10;
//	b = num / 1000 % 10;
//	a = num / 10000 % 10;
//	if (a == 0 || b == 0)
//	{
//		if (c == e)
//		{
//			printf("true");
//		}
//	}
//	else
//	{
//		if (a == e || b == d)
//		{
//			printf("false");
//		}
//	}
//	return 0;
//}
//输入正整数，判断位数
//#include<stdio.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	if (num <= 99999 || num >= 10000)
//	{
//		printf("5 %d %d %d %d %d", num / 10000 % 10, num / 1000 % 10, num / 1000 % 10, num / 1000 % 10, num / 1000 % 10);
//	}
//	if (num <= 9999 || num >= 1000)
//	{
//		printf("4 %d %d %d %d", num / 1000 % 10, num / 1000 % 10, num / 1000 % 10, num / 1000 % 10);
//	}
//	if (num <= 999 || num >= 100)
//	{
//		printf("3 %d %d %d %d", num / 1000 % 10, num / 1000 % 10, num / 1000 % 10);
//	}
//	if (num <= 99 || num >= 10)
//	{
//		printf("2 %d %d %d %d", num / 1000 % 10, num / 1000 % 10);
//	}
//	if (num <= 9 || num >= 1)
//	{
//		printf("1 %d %d %d %d", num / 1000 % 10);
//	}
//	return 0;
//}
//编写一个程序，求s=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)的值。
//#include<stdio.h>
//int main()
//{
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			sum += j;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("*******\n");
//	printf(" ******\n");
//	printf("  *****\n");
//	printf("   ****\n");
//	printf("    ***\n");
//	printf("     **\n");
//	printf("      *\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("        **\n");
//	printf("      ****\n");
//	printf("    ******\n");
//	printf("      ****\n");
//	printf("        **\n");
//	return 0;
//}