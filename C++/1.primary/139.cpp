#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < abs(n - i - 1); j++) {
			cout << ' ';
		}
		for (int j = 0; j < 2 * (n - abs(n - i - 1)); j++) {
			cout << 'A';
		}
		cout << endl;
	}
	return 0;
}