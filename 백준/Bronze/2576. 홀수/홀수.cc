#include <iostream>

int main()
{
	int i, n, sum = 0, small = 100;
	for (i = 1; i <= 7; i++)
	{
		std::cin >> n;
		if (n % 2)
		{
			sum = sum + n;
			if (n < small)
			{
				small = n;
			}
		}
	}
	if (sum == 0)
	{
		std::cout << -1;
		return 0;
	}
	std::cout << sum << std::endl;
	std::cout << small;
}