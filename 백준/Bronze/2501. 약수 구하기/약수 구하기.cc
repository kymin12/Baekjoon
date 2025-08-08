#include <iostream>

int main()
{
	int n, k, measure = 1, cnt = 0;
	std::cin >> n >> k;
	while (true)
	{
		if (measure > n)
		{
			std::cout << 0;
			break;
		}
		if (n % measure == 0)
		{
			cnt++;
		}
		if (cnt == k)
		{
			std::cout << measure;
			break;
		}
		measure++;
	}
}