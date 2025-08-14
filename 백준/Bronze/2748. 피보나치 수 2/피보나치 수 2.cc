#include <iostream>

long long fibo(int a)
{
    long long ar[91];
    ar[0] = 0;
    ar[1] = 1;
    for (int i = 2; i <= a; i++)
    {
        ar[i] = ar[i - 1] + ar[i - 2];
    }
    return ar[a];
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << fibo(n);
    return 0;
}