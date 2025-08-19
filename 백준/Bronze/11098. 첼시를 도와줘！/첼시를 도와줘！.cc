#include <iostream>

int main()
{
	int n, p, c, max = 0, i, j;
	std::string name, maxname;
	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		std::cin >> p;
		for (j = 1; j <= p; j++)
		{
			std::cin >> c >> name;
			if (c > max)
			{
				max = c;
				maxname = name;
			}
		}
		std::cout << maxname << std::endl;
		max = 0;
	}
}