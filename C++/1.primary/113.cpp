#include <iostream>
using namespace std;

int year_to_day[13] = { 0,
	31, 28, 31, 30,
	31, 30, 31, 31,
	30, 31, 30, 31
};

bool leap_year(int &year) {
	if (year % 4 == 0 && year % 100) {
		return true;
	}
	if (year % 400 == 0) {
		return true;
	}
	return false;
}

int main()
{
	int y, m;
	cin >> y >> m;
	cout << year_to_day[m] + (m == 2 && leap_year(y)) << endl;
	return 0;
}
