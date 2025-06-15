#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ar[9], i, max = 0, cnt;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &ar[i]);
	}
	for (i = 0; i < 9; i++)
	{
		if (ar[i] > max)
		{
			cnt = i;
			max = ar[i];
		}
	}
	printf("%d\n%d", max, cnt + 1);
}