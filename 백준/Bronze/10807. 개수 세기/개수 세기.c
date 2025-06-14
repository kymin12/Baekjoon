#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ar[1000], cnt = 0, a, i, b;
	scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		scanf("%d", &ar[i]);
	}
	scanf("%d", &b);
	for (i = 0; i < a; i++)
	{
		if (ar[i] == b)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}