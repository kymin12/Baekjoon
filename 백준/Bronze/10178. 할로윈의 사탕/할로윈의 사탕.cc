#include <iostream>

int main()
{
	int t, c, v, i;
	std::cin >> t;
	for (i = 1; i <= t; i++)
	{
		std::cin >> c >> v;
		std::cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << std::endl;
	}
}