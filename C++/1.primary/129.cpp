#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int main()
{
	int n, num, res = INT_MAX;
	cin >> n;
	while (n--) {
		cin >> num;
		if (res > num) {
			res = num;
		}
	}
	cout << res << endl;
	return 0;
}
