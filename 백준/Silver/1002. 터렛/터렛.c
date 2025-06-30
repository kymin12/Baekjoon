#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int t, x1, y1, r1, x2, y2, r2, i;
	double d;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if (x1 == x2 && y1 == y2 && r1 == r2)
		{
			printf("-1");
		}
		else if (d > abs(r1 - r2) && d < r1 + r2)
		{
			printf("2");
		}
		else if (d == r1 + r2 || d == abs(r1 - r2))
		{
			printf("1");
		}
		else if (d > r1 + r2 || d < abs(r1 - r2))
		{
			printf("0");
		}
		printf("\n");
	}
}