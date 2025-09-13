#include <iostream>

int main() {
	int n, score = 0, res[100], bonus = 0, i;
	std::cin >> n;
	for (i = 1; i < n + 1; i++)
	{
		std::cin >> res[i];
		if (res[i] == 1) 
		{
			score++;
			if (res[i - 1] == 1)
			{
				bonus++;
				score += bonus;
			}
			else
			{
				bonus = 0;
			}
		}
	}
	std::cout << score;
}