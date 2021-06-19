#include <iostream>
using namespace std;

int main()
{
	int l, r;
	cin >> l >> r;
	int i = l - l % 11 + ((l % 11) ? 11 : 0);
	for (; i <= r; i += 11) {
		i == (l - l % 11 + (l % 11) ? 11 : 0) || cout << ' ';
		cout << i;
	}
	return 0;
}
