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
		for (j = 0; j < n - i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}