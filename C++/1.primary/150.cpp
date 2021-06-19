#include <iostream>

using namespace std;
constexpr int MAX_N = 200;
int arr[MAX_N + 5][MAX_N + 5];
int main()
{
	int m, n;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = n - 1; j >= 0; j--) {
			cout << arr[j][i];
			!j || cout << ' ';
		}
		cout << endl;
	}
	return 0;
}

