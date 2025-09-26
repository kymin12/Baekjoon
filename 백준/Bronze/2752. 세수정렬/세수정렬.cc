#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int f = a, l = a, m;

    if (b < f) f = b;
    if (c < f) f = c;
    if (b > l) l = b;
    if (c > l) l = c;

    if ((a != f) && (a != l)) m = a;
    else if ((b != f) && (b != l)) m = b;
    else m = c;

    std::cout << f << " " << m << " " << l;
}