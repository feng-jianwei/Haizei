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

void getForward(int year, int mon, int day) {
	day -= 1;
	if (day == 0) {
		mon = mon - 1;
		if (mon == 0) {
			year -= 1;
			mon = 12;
		}
		day = mon_to_day[mon] + ((mon == 2) && (cal(year)));
	}
	cout << year << " " << mon << " " << day << endl;
	return;
}

void getNext(int year, int mon, int day) {
	day += 1;
	if (day > mon_to_day[mon] + (mon == 2 && cal(year))) {
		day = 1;
		mon += 1;
		if (mon == 13) {
			mon = 1;
			year += 1;
		}
	}	
	cout << year << " " << mon << " " << day << endl;
	return;
}

int  main()
{
	int year, mon, day;
	cin >> year >> mon >> day;
	getForward(year, mon, day);
	getNext(year, mon, day);
	return 0;
}
