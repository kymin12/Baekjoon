#include <iostream>

int main()
{
    int n, i, j;
    std::cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }
        std::cout << "*";
        if (i > 1)
        {
            for (j = 1; j <= 2 * i - 3; j++)
            {
                std::cout << " ";
            }
            std::cout << "*";
        }
        std::cout << "\n";
    }
}