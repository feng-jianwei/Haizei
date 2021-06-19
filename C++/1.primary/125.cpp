#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	int hh, mm, ss;
	cin >> hh >> mm >> ss >> t;
	double rate = (double)t / 864; 
	hh += t / 3600;
	t %= 3600;
	mm += t / 60;
	t %= 60;
	ss += t;
	if (ss >= 60) {
		ss -= 60;
		mm++;
	}
	if (mm >= 60) {
		mm -= 60;
		hh++;
	}
	if (hh >= 24) {
		hh -= 24;
	}
	string idx = hh < 12 ? "am" : "pm";
	if (!hh) {
		hh = 12;
	}
	if (hh > 12) {
		hh -= 12;
	}
	cout << hh << ':' << mm << ':' << ss << idx << endl 
		 << fixed << setprecision(2) << rate << '%' << endl;
	return 0;
}
