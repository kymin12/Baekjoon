#include <iostream>

int main()
{
	int n, i, j;
	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = n; j > i; j--)
		{
			std::cout << " ";
		}
		for (j = 1; j <= i * 2 - 1; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}