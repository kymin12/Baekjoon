#include <iostream>

int main()
{
	int i, n, sum = 0;
	for (i = 1; i <= 5; i++)
	{
		std::cin >> n;
		sum = sum + n;
	}
	std::cout << sum;
}