#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	for (auto &c : str) {
		if (!isalpha(c)) {
			continue;
		}
		c += 1;
		if (c == char('z' + 1)) {
			c = 'a';
		}
		if (c == char('Z' + 1)) {
			c = 'A';
		}
	}
	cout << str << endl;
	return 0;
}
