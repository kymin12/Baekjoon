#include <iostream>

int main()
{
	int n, i, j;
	std::cin >> n;
	for (i = 1; i < n * 2; i++)
	{
		if (i <= n)
		{
			for (j = 1; j <= i; j++)
			{
				std::cout << "*";
			}
		}
		else
		{
			for (j = 1; j <= 2 * n - i; j++)
			{
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}
}