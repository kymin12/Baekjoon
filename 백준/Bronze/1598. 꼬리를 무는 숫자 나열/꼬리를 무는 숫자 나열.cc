#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int rowA = (a - 1) / 4;
    int colA = (a - 1) % 4;

    int rowB = (b - 1) / 4;
    int colB = (b - 1) % 4;

    int distance = abs(rowA - rowB) + abs(colA - colB);
    cout << distance;
}