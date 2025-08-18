#include <iostream>

int main()
{
	int m, n, i, cnt = 0, sum = 0, first = -1;
	std::cin >> m >> n;
	for (i = 1; i <= 100; i++)
	{
		if (i * i < m)
		{
			continue;
		}
		else if (i * i > n)
		{
			break;
		}
		if (i * i >= m && i * i <= n)
		{
			if (cnt == 0)
			{
				first = i * i;
			}
			cnt++;
			sum = sum + (i * i);
		}
	}
	if (cnt == 0)
	{
		std::cout << first;
	}
	else
	{
		std::cout << sum << std::endl;
		std::cout << first;
	}
}