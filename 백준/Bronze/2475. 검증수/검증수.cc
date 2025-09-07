#include <iostream>

int main()
{
	int n, sum = 0, i;
	for (i = 1; i <= 5; i++)
	{
		std::cin >> n;
		sum = sum + n * n;
	}
	std::cout << sum % 10;
}