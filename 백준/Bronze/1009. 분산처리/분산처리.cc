#include <iostream>
#include <math.h>

int main()
{
	int t, a, b, m;
	std::cin >> t;
	for (int i = 1; i <= t; i++)
	{
		std::cin >> a;
		std::cin >> b;
		m = a;
		if (a % 10 == 1 || a % 10 == 5 || a % 10 == 6)
		{
			m = a % 10;
		}
		else if (a % 10 == 2 || a % 10 == 3 || a % 10 == 7 || a % 10 == 8)
		{
			if (b % 4)
			{
				m = pow(a % 10, b % 4);
				m = m % 10;
			}
			else
			{
				m = pow(a % 10, 4);
				m = m % 10;
			}
		}
		else if (a % 10 == 4 || a % 10 == 9)
		{
			if (b % 2)
			{
				m = pow(a % 10, b % 2);
				m = m % 10;
			}
			else
			{
				m = pow(a % 10, 2);
				m = m % 10;
			}
		}
		else
		{
			m = 10;
		}
		std::cout << m << std::endl;
	}
}