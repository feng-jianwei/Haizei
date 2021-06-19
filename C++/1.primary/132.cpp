#include <climits>
#include <iostream>
using namespace std;

int main()
{
	int n, num;
	long long res = 1;
	cin >> n;
	while (n--) {
		cin >> num;
		res *= num;
	}
	cout << res << endl;
	return 0;
}
