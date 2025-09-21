#include <iostream>

int main() 
{
	int arr[1001], n, m, ans = 0, k = 1, i, j;
	for (i = 1; i <= 1000; i++) 
	{
		for (j = 1; j <= i; j++) 
		{
			arr[k] = i;
			if (k > 1000) {
				break;
			}
			k++;
		}
	}
	std::cin >> n >> m;
	for (i = n; i <= m; i++) 
	{
		ans += arr[i];
	}
	std::cout << ans;
}