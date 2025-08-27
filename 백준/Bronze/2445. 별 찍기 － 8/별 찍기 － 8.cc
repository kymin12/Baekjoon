#include <iostream>

int main()
{
	int n, i, j;
	std::cin >> n;
	for (i = 1; i < 2 * n; i++)
	{
		if (i <= n)
		{
			for (j = 1; j <= i; j++)
			{
				std::cout << "*";
			}
			for (j = 1; j <= (n - i) * 2; j++)
			{
				std::cout << " ";
			}
			for (j = 1; j <= i; j++)
			{
				std::cout << "*";
			}
		}
		else
		{
			for (j = 1; j <= (2 * n) - i; j++)
			{
				std::cout << "*";
			}
			for (j = 1; j <= (i - n) * 2; j++)
			{
				std::cout << " ";
			}
			for (j = 1; j <= (2 * n) - i; j++)
			{
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}
}