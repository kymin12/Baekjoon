#include <iostream>

int main()
{
	int cnt = 0, i, j;
	char board[9][9];

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			std::cin >> board[i][j];
		}
	}

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i % 2 && j % 2)
			{
				if (board[i][j] == 'F')
				{
					cnt++;
				}
			}
			else if (!(i % 2) && !(j % 2))
			{
				if (board[i][j] == 'F')
				{
					cnt++;
				}
			}
		}
	}

	std::cout << cnt;
}