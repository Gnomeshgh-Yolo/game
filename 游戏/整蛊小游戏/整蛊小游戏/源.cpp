#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	printtf("你的计算机将在一分钟内关机");
	system("shutdown -s -t 60");
	printf("请输入:我是猪.关机将暂停.");
	
}