#include <iostream>

int main()
{
    int t, n, digit;
    std::cin >> t;

    while (t--)
    {
        std::cin >> n;
        digit = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                std::cout << digit << " ";
            }
            n /= 2;
            digit++;
        }
    }
}
