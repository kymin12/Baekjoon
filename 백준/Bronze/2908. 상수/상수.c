#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char ar[4], arr[4];
	int i, temp;
	scanf("%s", ar);
	scanf("%s", arr);
	temp = ar[0];
	ar[0] = ar[2];
	ar[2] = temp;
	temp = arr[0];
	arr[0] = arr[2];
	arr[2] = temp;
	if (strcmp(ar, arr) > 0)
	{
		printf("%s", ar);
	}
	else
	{
		printf("%s", arr);
	}
}