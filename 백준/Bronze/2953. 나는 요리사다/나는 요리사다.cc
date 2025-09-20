#include <iostream>

int main(void) {
	int total[5];
	int num, max = 0, idx, i, j;
	for (i = 0; i < 5; i++)
	{
		total[i] = 0;
		for (j = 0; j < 4; j++)
		{ 
			std::cin >> num;
			total[i] += num;
		}
		if (max < total[i]) 
		{ 
			max = total[i];
			idx = i;
		}
	}
	std::cout << idx + 1 << " " << max << "\n";
	return 0;
}