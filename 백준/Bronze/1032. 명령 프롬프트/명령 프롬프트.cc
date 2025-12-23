#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> files(N);
    for (int i = 0; i < N; i++)
    {
        cin >> files[i];
    }

    string result = files[0];

    for (int i = 0; i < result.length(); i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (files[j][i] != result[i])
            {
                result[i] = '?';
                break;
            }
        }
    }

    cout << result << endl;

    return 0;
}