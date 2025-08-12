#include <iostream>

int main()
{
	int n, i, j;
	std::cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = n - i; j >= 1; j--)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}