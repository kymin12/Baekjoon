#include <iostream>
#include <sstream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) 
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        int a, b;
        char comma;
        ss >> a >> comma >> b;
        cout << a + b << "\n";
    }
}