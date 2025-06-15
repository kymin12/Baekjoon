#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, ar[101] = { 0, }, a, i, b, temp = 0, j;
	scanf("%d %d", &n, &m);
	for (i = 0; i <= n; i++)
	{
		ar[i] = i;
	}
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		temp = ar[a];
		ar[a] = ar[b];
		ar[b] = temp;
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ", ar[i]);
	}
}