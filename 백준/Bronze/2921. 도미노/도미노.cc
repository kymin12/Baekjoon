#include <iostream>

int main()
{
	int n, sum = 0, i, j;
	std::cin >> n;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			sum = sum + i + j;
		}
	}
	std::cout << sum;
}