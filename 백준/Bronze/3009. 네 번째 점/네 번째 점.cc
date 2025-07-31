#include <iostream>

int main()
{
	int x1, x2, x3, x4, y1, y2, y3, y4;
	std::cin >> x1;
	std::cin >> y1;
	std::cin >> x2;
	std::cin >> y2;
	std::cin >> x3;
	std::cin >> y3;
	if (x1 != x2 && x1 != x3)
	{
		x4 = x1;
	}
	else if (x2 != x1 && x2 != x3)
	{
		x4 = x2;
	}
	else
	{
		x4 = x3;
	}
	if (y1 != y2 && y1 != y3)
	{
		y4 = y1;
	}
	else if (y2 != y1 && y2 != y3)
	{
		y4 = y2;
	}
	else
	{
		y4 = y3;
	}
	std::cout << x4;
	std::cout << " ";
	std::cout << y4;
}