#include <iostream>

int main()
{
	int n, y, m, d, by = 1990, bm = 1, bd = 1, sy = 2010, sm = 12, sd = 31, i;
	std::string name, bn, sn;
	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		std::cin >> name >> d >> m >> y;
		if (y > by)
		{
			by = y;
			bm = m;
			bd = d;
			bn = name;
		}
		else if (y == by)
		{
			if (m > bm)
			{
				bm = m;
				bd = d;
				bn = name;
			}
			else if (m == bm)
			{
				if (d > bd)
				{
					bd = d;
					bn = name;
				}
			}
		}
		if (y < sy)
		{
			sy = y;
			sm = m;
			sd = d;
			sn = name;
		}
		else if (y == sy)
		{
			if (m < sm)
			{
				sm = m;
				sd = d;
				sn = name;
			}
			else if (m == sm)
			{
				if (d < sd)
				{
					sd = d;
					sn = name;
				}
			}
		}
	}
	std::cout << bn << std::endl;
	std::cout << sn;
}