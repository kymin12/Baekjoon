#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, ar[1000000], max = -1000000, min = 1000000, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
		if (ar[i] > max)
		{
			max = ar[i];
		}
		if (ar[i] < min)
		{
			min = ar[i];
		}
	}
	printf("%d %d", min, max);
}