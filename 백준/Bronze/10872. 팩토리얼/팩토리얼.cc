#include <iostream>

int main()
{
	int n, facn = 1, i;
	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		facn *= i;
	}
	std::cout << facn << std::endl;
}