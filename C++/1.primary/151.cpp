#include <iostream>
using namespace std;
bool is_win(const char &a, const char &c) 
{
	if (a == 'O') {
		return c == 'Y';
	}
	if (a == 'Y') {
		return c == 'H';
	}
	return c == 'O';
}

int Win(const char &l, const char &r, const char &l1, const char &r1)
{
	if (is_win(l, l1)) {
		if (is_win(l, r1) || l == r1) {
			return true;
		}
		if (is_win(r, r1)) {
			return true;
		}
		return false;
	} else if (l == l1) {
		if (is_win(r, r1)) {
			return true;
		}
		if (r == r1) {
			return -1;
		}
		return false;
	} else {
		if (!is_win(r, l1)) {
			return false;
		}
		if (is_win(r, r1) || r == r1) {
			return true;
		}
		return false;
	}
	return true;
}
int main()
{
	char l, r;
	char l1, r1;
	cin >> l >> r >> l1 >> r1;
	int res = Win(l, r, l1, r1);
	if (res == -1) {
		cout << "TIE";
	} else if (res == 1){
		cout << "MING";
	} else {
		cout << "LIHUA";
	}
	cout << endl;
	return 0;
}
