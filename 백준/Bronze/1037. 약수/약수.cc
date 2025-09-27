#include <iostream>
#include <algorithm>

int main()
{
	int num, divisor[50], N = 0;
	
	std::cin >> num;

	for (int i = 0; i < num; i++)
	{
		std::cin >> divisor[i];
	}

	std::sort(divisor, divisor + num);

	N = divisor[0] * divisor[num - 1];
	std::cout << N;
}