#include <iostream>

int main()
{
	int total, ar[10];
	std::cin >> total;
	for (int i = 0; i < 9; i++)
	{
		std::cin >> ar[i];
		total = total - ar[i];
	}
	std::cout << total;
}