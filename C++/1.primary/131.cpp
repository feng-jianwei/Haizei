#include <climits>
#include <iostream>
using namespace std;

int main()
{
	int max_num = INT_MIN, min_num = INT_MAX;
	int n, num;
	cin >> n;
	while (n--) {
		cin >> num;
		if (max_num < num) {
			max_num = num;
		}
		if (min_num > num) {
			min_num = num;
		}
	}
	cout << max_num - min_num << endl;
	return 0;
}
