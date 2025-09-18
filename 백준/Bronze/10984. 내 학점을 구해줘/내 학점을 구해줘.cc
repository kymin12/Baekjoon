#include <iostream>

int main()
{
    int test_case, y, x;
    std::cin >> test_case;
    std::cout << std::fixed;
    std::cout.precision(1);
    for (x = 0; x < test_case; x++)
    {
        int num, C = 0;
        double G = 0.0;
        std::cin >> num;
        for (y = 0; y < num; y++)
        {
            int temp_c;
            double temp_g;
            std::cin >> temp_c >> temp_g;
            C += temp_c;
            G += temp_g * temp_c;
        }
        std::cout << C << " " << G / C << "\n";
    }
}