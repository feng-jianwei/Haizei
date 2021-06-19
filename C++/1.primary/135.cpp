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
	int day;
	int yy, mm, dd;
	cin >> day >> yy >> mm >> dd;
	while (day--) {
		dd++;
		if (dd > year_to_day[mm] + (mm == 2 && leap_year(yy))) {
			dd = 1;
			mm++;
		}
		if (mm > 12) {
			mm = 1;
			yy++;
		}
	}
	cout << yy << ' ' << mm << ' ' << dd << endl;
	return 0;
}
