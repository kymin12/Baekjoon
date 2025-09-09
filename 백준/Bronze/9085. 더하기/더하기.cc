#include <iostream>

int main()
{
	int t, n, i, j, sum = 0, na;
	std::cin >> t;
	for (i = 1; i <= t; i++)
	{
		sum = 0;
		std::cin >> n;
		for (j = 1; j <= n; j++)
		{
			std::cin >> na;
			sum = sum + na;
		}
		std::cout << sum << std::endl;
	}
}