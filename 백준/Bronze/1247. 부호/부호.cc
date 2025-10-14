#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    for (int tc = 0; tc < 3; ++tc) 
    {
        int N;
        if (!(cin >> N))
        {
            return 0;
        }
        __int128 sum = 0;
        long long x;
        for (int i = 0; i < N; ++i) 
        {
            cin >> x;
            sum += (__int128)x;
        }
        if (sum == 0)
        {
            cout << "0\n";
        }
        else if (sum > 0)
        {
            cout << "+\n";
        }
        else
        {
            cout << "-\n";
        }
    }
    return 0;
}