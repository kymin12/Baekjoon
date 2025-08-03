#include <iostream>

int main()
{
	int t, n, i, j, cnt = 0, check;
	std::cin >> t;
	for (i = 1; i <= t; i++)
	{
		check = 0;
		std::cin >> n;
		if (n == 1)
		{
			continue;
		}
		for (j = 2; j < n; j++)
		{
			if (n % j == 0)
			{
				check = 1;
				break;
			}
		}
		if (check == 1)
		{
			continue;
		}
		else
		{
			cnt++;
		}
	}
	std::cout << cnt;
}