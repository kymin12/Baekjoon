#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, k, a[10], i, cnt = 0;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = n - 1; i >= 0; i--)
	{
		if (k % a[i] < k)
		{
			cnt = cnt + k / a[i];
			k = k % a[i];
		}
	}
	printf("%d", cnt);
}