#include <iostream>
using namespace std;

int mon_to_day[] = { 0,
	31, 28, 31, 30,
	31, 30, 31, 31,
	30, 31, 30, 31
};

bool cal(const int &year) {
	if (year % 4 == 0 && year % 100) {
		return true;
	}
	if (year % 400 == 0) {
		return true;
	}
	return false;
}

bool judge(const int &year, const int &mon, const int &day) {
	if (mon > 12 || mon < 1) {
		return false;
	}
	if (day < 1 || day > mon_to_day[mon] + (cal(year) && mon == 2)) {
		return false;
	}
	return true;
}

int  main()
{
	int year, mon, day;
	cin >> year >> mon >> day;
	cout << (judge(year, mon, day) ? "YES" : "NO") << endl;
	return 0;
}
