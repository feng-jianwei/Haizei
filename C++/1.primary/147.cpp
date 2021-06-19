#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	char c = *str.rbegin();
	if (!((int)c & 1)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << endl;
	return 0;
}

