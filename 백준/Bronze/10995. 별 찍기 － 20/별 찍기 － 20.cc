#include <iostream>

int main()
{
	int n, i, j;
	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 1; j <= n; j++)
			{
				std::cout << " *";
			}
		}
		
		else
		{
			for (j = 1; j <= n; j++)
			{
				std::cout << "* ";
			}
		}
		std::cout << std::endl;
	}
}