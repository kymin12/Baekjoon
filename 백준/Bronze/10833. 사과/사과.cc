#include <iostream>

int main()
{
	int n, i, sum = 0, stu, apple;
	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		std::cin >> stu >> apple;
		if (apple % stu == 0)
		{
			continue;
		}
		while (apple>=stu)
		{
			apple = apple - stu;
		}
		sum = sum + apple;
	}
	std::cout << sum;
}