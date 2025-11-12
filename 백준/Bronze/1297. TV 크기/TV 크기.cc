#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int d, h, w;
	cin >> d >> h >> w;
	int hh, ww;
	hh = (d * h) / sqrt(h * h + w * w);
	ww = (d * w) / sqrt(h * h + w * w);
	cout << (int)hh << ' ' << (int)ww;
}