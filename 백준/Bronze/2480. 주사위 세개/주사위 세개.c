#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && a == c) printf("%d", 10000 + a * 1000);
	else if (a == b) printf("%d", 1000 + a * 100);
	else if (b == c) printf("%d", 1000 + b * 100);
	else if (c == a) printf("%d", 1000 + c * 100);
	else if (a > b && a > c) printf("%d", a * 100);
	else if (b > a && b > c) printf("%d", b * 100);
	else if (c > b && c > a) printf("%d", c * 100);
}