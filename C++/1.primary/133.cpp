#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		for (int j = i; j < n + 1; j++) {
			j == i || cout << "\t";
			cout << i << '*' << j << '=' << i * j;
		}
		cout << endl;
	}
	return 0;
}
