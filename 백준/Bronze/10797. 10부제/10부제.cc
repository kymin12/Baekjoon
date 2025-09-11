#include <iostream>

int main()
{
	int n, i, a, cnt = 0;
	std::cin >> n;
	for (i = 1; i <= 5; i++)
	{
		std::cin >> a;
		if (a == n)
		{
			cnt++;
		}
	}
	std::cout << cnt;
}