#include <iostream>

using namespace std;

int main()
{
	int yy, mm, dd;
	cin >> yy >>  mm >> dd;
	yy -= (mm < 3);
	mm += ((mm < 3) ? 12 : 0); 
	int q = dd, m = mm, j = yy / 100, k = yy % 100;
	int now = (q + (m + 1) * 26 / 10 + k + k / 4 + j / 4 + 5 * j) % 7; 
	now -= 1;
	if (now == 0) {
		now = 7;
	} 
	if (now == -1) {
		now = 6;
	}
	cout << now << endl;
	return 0;
}
