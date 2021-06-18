#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int arr[3];

int main()
{
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	if (arr[0] + arr[1] <= arr[2]) {
		cout << "illegal triangle" << endl;
		return 0;
	}
	int cal = pow(arr[0], 2) + pow(arr[1], 2) - pow(arr[2], 2);
	cal == 0 && cout << "right triangle" ||
		cal > 0 && cout << "acute triangle" ||
		cal < 0 && cout << "obtuse triangle";
	cout << endl;
	return 0;
}
