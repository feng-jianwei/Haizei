#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

constexpr double pi = 3.14;

int main()
{
	double r, h;
	cin >> r >> h;
	double sum = (pi * r + sqrt(2) * r * 2 + 2 * r) * h + 2 * (0.5 * pi * pow(r, 2) + 2 * pow(r, 2));
	cout << fixed << setprecision(2) << sum << endl; 
	return 0;
}
