#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str, res;
	int num, cnt = 0;
	cin >> num;
	while (num--) {
		cin >> str;
		if (str.length() > cnt) {
			cnt = str.length();
			res = str;
		}
	}
	cout << res << endl;
	return 0;
}
