#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double res = 0;
	int money, mon;
	cin >> money >> mon;
	while (mon--) {
		res += money;
		res *= 1.00417;
	}
	cout << '$' << fixed << setprecision(2) << res << endl;
	return 0;
}
