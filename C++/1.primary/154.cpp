#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	for (int i = 1; i < num + 1; i++) {
		for (int j = 0; j < num - i + 1; j++) {
			j == 0 || cout << ' ';
			cout << num - i + 1 - j;
		}
		cout << endl;
	}
	return 0;
}

