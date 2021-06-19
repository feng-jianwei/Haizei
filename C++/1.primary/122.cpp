#include <iostream>
#include <iomanip>

using namespace std;
constexpr int am = 12 * 60 * 60;
constexpr int pm = 13 * 60 * 60;

int main() {
	int t, hh = 13, mm = 60, ss = 60;
	cin >> t;
	string idx;
	if (t > pm) {
		idx = "pm";
		t -= pm;
	} else if (t < am) {
		idx = "am";
	} else {
		idx = "midnoon";
	}
	while (hh * 60 * 60 > t) {
		hh--;
	}
	t -= hh * 60 * 60;
	while (mm * 60 > t) {
		mm--;
	}
	t -= mm * 60;
	ss = t;
	cout << setw(2) << setfill('0') << (hh == 13 ? 1 : idx == "pm" ? hh + 1 : hh) << ":" 
		 << setw(2) << setfill('0') << mm << ":"
		 << setw(2) << setfill('0')<< ss << " "
		 << idx << endl;
	return 0;
}
