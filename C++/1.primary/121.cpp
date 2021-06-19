#include <iostream>
using namespace std;

int main()
{
	char a, b;
	cin >> a >> b;
	if (a == 'O') {
		if (b == 'O') {
			cout << "TIE";
		} else if (b == 'H') {
			cout << "LI";
		} else {
			cout << "MING";
		}
	} else if (a == 'Y') {
		if (b == 'H') {
			cout << "MING";
		} else if (b == 'Y') {
			cout << "TIE";
		} else {
			cout << "LI";
		}
	} else {
		if (b == 'H') {
			cout << "TIE";
		} else if (b == 'Y') {
			cout << "LI";
		} else {
			cout << "MING";
		}
	}
	cout << endl;
	return 0;
}
