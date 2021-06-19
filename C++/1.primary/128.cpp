#include <ios>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, num;
	double sum;
	cin >> n;
	int idx = n;
	while (n--) {
		cin >> num;
		sum += num;
	}
	cout << fixed << setprecision(2) << sum / idx << endl;
	return 0;
}
