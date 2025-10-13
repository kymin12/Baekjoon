#include <iostream>

int main()
{
	long long n, m;
	long long ab;
	std::cin >> n >> m;
	if (n - m >= 0)
	{
		ab = n - m;
	}
	else
	{
		ab = (n - m) * (-1);
	}
	std::cout << ab;
}