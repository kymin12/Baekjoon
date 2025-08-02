#include <iostream>

int main()
{
	int n, smallx = 10000, bigx = -10000, smally = 10000, bigy = -10000, x, y;
	int area;
	std::cin >> n;
	while (n--)
	{
		std::cin >> x;
		std::cin >> y;
		if (x > bigx)
		{
			bigx = x;
		}
		if (x < smallx)
		{
			smallx = x;
		}
		if (y > bigy)
		{
			bigy = y;
		}
		if (y < smally)
		{
			smally = y;
		}
	}
	area = (bigx - smallx) * (bigy - smally);
	std::cout << area;
}