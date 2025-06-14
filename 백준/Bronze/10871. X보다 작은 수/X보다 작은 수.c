#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ar[10000];
	int i, a, n;
	scanf("%d  %d", &a, &n);
	for (i = 0; i < a; i++)
	{
		scanf("%d", &ar[i]);
	}
	for (i = 0; i < a; i++)
	{
		if (ar[i] < n)
		{
			printf("%d ", ar[i]);
		}
	}
}