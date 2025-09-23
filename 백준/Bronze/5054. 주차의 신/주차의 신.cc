#include <iostream>

int main()
{
	int t, n, input, i, j, result = 0, max = -1, min = 100;
	std::cin >> t;
	for (i = 0; i < t; i++)
	{
		std::cin >> n;
		result = 0;
		max = -1;
		min = 100;
		for (j = 0; j < n; j++)
		{
			std::cin >> input;
			if (input < min)
			{
				min = input;
			}
			if (input > max)
			{
				max = input;
			}
		}
		result = (max - min) * 2;
		std::cout << result << std::endl;
	}
}