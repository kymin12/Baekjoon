#include <iostream>

int main()
{
	int t, c, q, d, n, p;
	std::cin >> t;
	while (t--)
	{
		std::cin >> c;
		q = c / 25;
		c = c % 25;
		d = c / 10;
		c = c % 10;
		n = c / 5;
		c = c % 5;
		p = c / 1;
		std::cout << q << " " << d << " " << n << " " << p << std::endl;
	}
}