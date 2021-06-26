#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	int end = 2 * (c - 'A') + 1;
	for (int i = 0; i < (c - 'A') + 1; i++) {
		for (int j = 0; j < end - i; j++) {
			if (j < i) {
				cout << ' ';
				continue;
			} else if (j < c - 'A' + 1) {
				cout << char(c - j);
				continue;
			} else {
				cout << char(j - c + 2 * 'A' - 1);
				continue;
			}
		}
		cout << endl;
	}
	return 0;
}
