#include <iostream>
#include <string>

int main()
{
	int len;
	std::string s, rs;
	std::cin >> s;
	len = s.length();
	for (int i = len - 1; i >= 0; i--)
	{
		rs += s[i];
	}
	if (s.compare(rs))
	{
		std::cout << 0;
	}
	else
	{
		std::cout << 1;
	}
}