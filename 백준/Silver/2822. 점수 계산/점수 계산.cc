#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int input_score[8] = { 0, };
	std::vector<int> score;
	for (int i = 0; i < 8; i++)
	{
		std::cin >> input_score[i];
		score.push_back(input_score[i]);
	}
	std::sort(input_score, input_score + 8, std::greater<int>());
	int final_score = 0;
	int index[5] = { 0, };
	for (int i = 0; i < 5; i++)
	{
		final_score += input_score[i];
		int index_Q = find(score.begin(), score.end(), input_score[i]) - score.begin();
		index[i] = index_Q + 1;
	}
	std::cout << final_score << std::endl;
	std::sort(index, index + 5);
	for (int i = 0; i < 5; i++)
	{
		std::cout << index[i] << " ";
	}
}