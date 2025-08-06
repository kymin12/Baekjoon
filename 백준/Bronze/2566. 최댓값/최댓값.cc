#include <iostream>

int main()
{
	int array[9][9];
	int i, j, n, m, max = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			std::cin >> array[i][j];
			if (array[i][j] >= max)
			{
				max = array[i][j];
				n = i;
				m = j;
			}
		}
	}
	std::cout << max << std::endl;
	std::cout << n + 1 << " " << m + 1;
}