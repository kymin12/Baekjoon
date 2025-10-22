#include <iostream>

using namespace std;

long long dp[31][31];

long long combination(int n, int m)
{
	if (n == m || m == 0) return 1;
	if (dp[n][m] != 0) return dp[n][m];
	return dp[n][m] = combination(n - 1, m - 1) + combination(n - 1, m);
}

int main()
{
	int t, n, m;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n >> m;
		cout << combination(m, n) << endl;
	}

	return 0;
}