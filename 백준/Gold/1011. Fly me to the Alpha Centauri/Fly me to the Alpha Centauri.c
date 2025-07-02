#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int tele(int n)
{
	int i = (int)sqrt(n);

	if (n == i * i)
		return 2 * i - 1;
	else if (n <= i * i + i)
		return 2 * i;
	else
		return 2 * i + 1;
}

int main()
{
	int t, x, y, cnt, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &x, &y);
		n = tele(y - x);
		printf("%d\n", n);
	}
}