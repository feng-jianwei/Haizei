#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

constexpr double PI = 3.14;
int main()
{
	double r1, r2;
	cin >> r1 >> r2;
	cout << fixed << setprecision(2) << PI * pow(r1, 2) - PI * pow(r2, 2) << endl;  
	return 0;
}
