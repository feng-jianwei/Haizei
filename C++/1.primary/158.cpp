#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n + 1; i++) {
		for (int j = 0; j < n + 1 + abs(n - i); j++) {
			if (j == n - abs(n - i) || j == n + abs(n - i)) {
				cout << char('0' + abs(n - i));
			} else {
				cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
