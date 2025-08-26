#include <iostream>

int main()
{
	int t, s, n, q, p, i, price = 0, j;
	std::cin >> t;
	for (i = 1; i <= t; i++)
	{
		std::cin >> s;
		price = s;
		std::cin >> n;
		for (j = 1; j <= n; j++)
		{
			std::cin >> q;
			std::cin >> p;
			price = price + (q * p);
		}
		std::cout << price << std::endl;
	}
}