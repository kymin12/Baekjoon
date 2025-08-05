#include <iostream>

int main()
{
	int i, j, n, m;
	int ar[100][100], arr[100][100], sum[100][100];
	std::cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cin >> ar[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			sum[i][j] = ar[i][j] + arr[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cout << sum[i][j] << " ";
		}
		std::cout << std::endl;
	}
}