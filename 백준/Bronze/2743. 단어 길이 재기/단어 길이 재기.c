#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];
	int len;
	scanf("%s", s);
	len = strlen(s);
	printf("%d", len);
}