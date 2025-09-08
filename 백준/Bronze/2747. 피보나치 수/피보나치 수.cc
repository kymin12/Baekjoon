#include <iostream>

int main() {
	int n, i;
	int dp[45];
	std::cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	for (i = 2; i <= n; i++) 
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	std::cout << dp[n] << std::endl;
}