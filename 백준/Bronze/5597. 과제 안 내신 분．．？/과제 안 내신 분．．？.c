#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, ar[31] = {0, }, a, b, k;
	for (i = 1; i <= 30; i++)
	{
		ar[i] = i;
	}
	for (i = 1; i <= 28; i++)
	{
		scanf("%d", &k);
		for (j = 1; j <= 30; j++)
		{
			if (ar[j] == k)
			{
				ar[j] = 0;
			}
		}
	}
	for (i = 1; i <= 30; i++)
	{
		if (ar[i] > 0)
		{
			if (ar[i] > a)
			{
				b = ar[i];
			}
			else
			{
				a = ar[i];
			}
		}
	}
	printf("%d\n%d", a, b);
}