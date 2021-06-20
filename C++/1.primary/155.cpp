#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int res = 0, now;
	for (int i = 1; i <= num; i++) {
		now = i * (i - 1) + 3;
		res += now;
		cout << now << endl;
	}
	cout << res << endl;
	return 0;
}
