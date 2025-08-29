#include <iostream>

int main()
{
	int n, sum = 0, i, m;
	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		std::cin >> m;
		sum = sum + m - 1;
	}
	sum++;
	std::cout << sum;
}