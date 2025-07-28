#include <iostream>

int main()
{
	int n, i, j;
	std::cin >> n;
	for (i = 1; i <= 2 * n - 1; i++)
	{
		if (i <= n)
		{
			for (j = n - 1; j >= i; j--)
			{
				std::cout << " ";
			}
			for (j = 1; j <= 2 * i - 1; j++)
			{
				std::cout << "*";
			}
		}
		else
		{
			for (j = 1; j < i - n + 1; j++)
			{
				std::cout << " ";
			}
			for (j = 2 * n - 3; j >= 2 * i - 2 * n - 1; j--)
			{
				std::cout << "*";
			}
		}
		std::cout<<std::endl;
	}
}