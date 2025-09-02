#include <iostream>

int main()
{
	int t, v, e, i;
	std::cin >> t;
	for (i = 1; i <= t; i++)
	{
		std::cin >> v >> e;
		std::cout << e - v + 2 << std::endl;
	}
}