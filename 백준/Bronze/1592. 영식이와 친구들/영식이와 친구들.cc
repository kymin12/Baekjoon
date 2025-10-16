#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, l, i = 1, cnt = 0;
	cin >> n >> m >> l;
	vector<int> a(n + 1, 0);
	while (a[i] != m)
	{
		if (a[i] % 2)
		{
			if (i - l <= 0)
			{
				i = n - l + i;
			}
			else
			{
				i = i - l;
			}
			cnt++;
			a[i]++;
		}
		else
		{
			if (i + l > n)
			{
				i = (i + l) - n;
			}
			else
			{
				i = i + l;
			}
			cnt++;
			a[i]++;
		}
	}
	cout << --cnt;
}