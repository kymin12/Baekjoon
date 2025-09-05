#include <iostream>

int main()
{
	int n, i, j;
	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			std::cout << " ";
		}
		for (j = 1; j <= i; j++)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
}