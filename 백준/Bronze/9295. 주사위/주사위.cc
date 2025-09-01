#include <iostream>

int main()
{
	int t, i, cnt = 1, dice1, dice2;
	std::cin >> t;
	for (i = 1; i <= t; i++)
	{
		std::cin >> dice1 >> dice2;
		std::cout << "Case " << cnt << ": " << dice1 + dice2 << std::endl;
		cnt++;
	}
}