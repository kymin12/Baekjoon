#include <iostream>

int main()
{
	int a, b, c, d, i, sum;
	for (i = 1; i <= 3; i++)
	{
		std::cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		if (sum == 0)
		{
			std::cout << 'D' << std::endl;
		}
		else if (sum == 1)
		{
			std::cout << 'C' << std::endl;
		}
		else if (sum == 2)
		{
			std::cout << 'B' << std::endl;
		}
		else if (sum == 3)
		{
			std::cout << 'A' << std::endl;
		}
		else if (sum == 4)
		{
			std::cout << 'E' << std::endl;
		}
	}
}