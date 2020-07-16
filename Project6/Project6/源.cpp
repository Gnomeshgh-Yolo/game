#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double x;
	double result = 0.0;
	scanf("%lf", &x);
	if (x == 0)
	{
		printf("f(0.0)=0.0");
	}
	else
	{
		result = 1.0 / x;
		printf("f(%.1lf)=%.1lf", x, result);
	}
	return 0;
}