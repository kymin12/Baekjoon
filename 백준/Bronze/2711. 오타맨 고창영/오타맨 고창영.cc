#include <iostream>

int main()
{
	int n, t, i, j;
	std::string st;
	std::cin >> t;
	for (i = 1; i <= t; i++)
	{
		std::cin >> n >> st;
		for (j = 0; j < st.length(); j++)
		{
			if (j == n - 1)
			{
				continue;
			}
			std::cout << st[j];
		}
		std::cout << std::endl;
	}
}