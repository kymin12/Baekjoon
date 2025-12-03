#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string a;

	cin >> a;
	
	for (int i = 0; i < a.size(); i++)
	{
		if (isupper(a[i]))
		{
			cout << char(tolower(a[i]));
		}
		else if (islower(a[i]))
		{
			cout << char(toupper(a[i]));
		}
	}
}