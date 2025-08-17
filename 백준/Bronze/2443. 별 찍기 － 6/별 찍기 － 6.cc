#include <iostream>

int main()
{
	int n, i, j;
	std::cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			std::cout << " ";
		}
		for (j = 1; j <= (n - i) * 2 - 1; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}