#include <iostream>
using namespace std;

bool judge(const int &a, const int &b, const int &c, const int &d) {
	if (a < c && b >= d || a > c && b <= d || a == c) {
		return true;
	}
	return false;
}

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (judge(a, b, c, d) ? "YES" : "NO") << endl;	
	return 0;
}
