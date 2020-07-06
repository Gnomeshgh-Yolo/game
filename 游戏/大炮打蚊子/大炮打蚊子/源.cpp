#define _CRT_SECURE_NO_WARNINGS 1
#incldue<stdio.h>
int main()
{
	int m, n;
	int count = 0;
	int sum[400] = { 0 };
	char arr[22][22] = { 0 };
	scanf("%d%d", &m, &n);
	for (int i = 1; i <= m; i++)
	{
		getchar();
		for (int j = 1; j <= n; j++)
		{
			scanf("%c", &arr[i][j]);
		}
	}
	int k;
	int x, y;
	int j = 0;
	int kill = 0;
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d%d", &x, &y);
		x++;
		y++;
		if (arr[x][y] == '#' || arr[x][y] == '*')
		{
			kill++;
		}
		if (arr[x - 1][y] == '*')
		{
			kill++;
		}
		if (arr[x][y + 1] == '*')
		{
			kill++;
		}
		if (arr[x][y - 1] == '*')
		{
			kill++;
		}
		if (arr[x + 1][y] == '*')
		{
			kill++;
		}
		if (arr[x + 1][y] == '#')
		{
			arr[x + 1][y] = '*';
		}
		if (arr[x - 1][y] == '#')
		{
			arr[x - 1][y] = '*';
		}
		if (arr[x][y + 1] == '#')
		{
			arr[x][y + 1] = '*';
		}
		if (arr[x][y - 1] == '#')
		{
			arr[x][y - 1] = '*';
		}
		sum[j] = kill;
		j++;
		kill = 0;
	}
	for (int i = 0; i < j; i++)
	{
		printf("%d\n", sum[i]);
	}
	return 0;
}