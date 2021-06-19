#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int res = 0;
	for (auto &c : str) {
		if (c == 'A') {
			res += 1;
		}
	}
	cout << res << endl;
	return 0;
}
