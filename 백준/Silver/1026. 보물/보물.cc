#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, i, s = 0;
	cin >> n;
	vector<int> a(n), b(n);
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());
	for (i = 0; i < n; i++)
	{
		s = s + a[i] * b[i];
	}
	cout << s;
}