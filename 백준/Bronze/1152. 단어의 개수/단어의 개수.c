#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
 {
	char s[1000001];
	int cnt = 1, i, len;
	gets(s);
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == ' ')
		{
			cnt++;
		}
	}
	if (s[0] == ' ') cnt--;
	if (s[len - 1] == ' ')cnt--;
	printf("%d", cnt);
}