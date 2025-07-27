#include <iostream>

int main()
{
	int n, cnt = 0, a, x, y, sum;
	std::cin >> n;
	a = n;
	while (true)
	{
		if (a < 10)
		{
			x = 0;
		}
		else
		{
			x = a / 10;	
		}
		y = a % 10;
		sum = x + y;
		if (sum >= 10)
		{
			sum = sum % 10;
		}
		a = y * 10 + sum;
		cnt++;
		if (a == n)
		{
			break;
		}
	}
	std::cout << cnt;
}