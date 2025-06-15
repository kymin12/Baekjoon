#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, ar[10], cnt, result = 0, a;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		ar[i] = a % 42;
	}
	for (i = 0; i < 10; i++)
	{
		cnt = 0;
		for (j = i + 1; j < 10; j++)
		{
			if (ar[i] == ar[j])
			{
				cnt++;
			}
		}
		if (cnt == 0)
		{
			result++;
		}
	}
	printf("%d", result);
}