#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char tt[100];
	int pp[26] = { 0 }, i;
	printf("Input a string:");
	gets(tt);
	for (i = 0; i<strlen(tt); i++)
	{
		if (tt[i] >= 'a'&&tt[i] <= 'z')
		{
			for (char j = 'a'; j <= 'z'; j++)
			{
				if (tt[i] == j)
				{
					pp[j % 97]++;
				}
			}
		}
	}
	for (i = 0; i < 26; i++)
	{
		printf("%d ", pp[i]);
	}
	return 0;
}