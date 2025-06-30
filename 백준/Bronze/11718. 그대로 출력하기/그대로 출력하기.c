#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char c;

	while (scanf("%c", &c) != EOF) {
		printf("%c", c);
	}
}