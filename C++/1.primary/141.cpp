#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int idx = 0;
	for (int  i = 0; i < 2 * n + 1; i++) {
		for (int j = 0; j < n - abs(n - i); j++) {
			cout << ' ';
		}
		for (int j = n - abs(n - i); j < n +  abs(n - i) + 1; j++) {
			cout << char('A' + n - abs(n - j));
		}
		cout << endl;
	}
	return 0;
}
