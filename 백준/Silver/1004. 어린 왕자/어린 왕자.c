#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int t, x1, y1, x2, y2, n, cx, cy, r, cnt = 0, i, j;
	int d, dd;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &n);
		cnt = 0;
		for (j = 0; j < n; j++)
		{
			scanf("%d %d %d", &cx, &cy, &r);
			d = pow(x1 - cx, 2) + pow(y1 - cy, 2);
			dd = pow(x2 - cx, 2) + pow(y2 - cy, 2);
			if ((d < r * r) != (dd < r * r))
			{
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}