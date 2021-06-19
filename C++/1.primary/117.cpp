#include <iostream>
using namespace std;

bool judge(int &num) {
	int temp = num;
	int sum = 0;
	do {
		sum = 10 * sum + temp % 10;
		temp /= 10;
	} while (temp);
	if (sum == num) return true;
	return false;
}

int main()
{
	int a;
	cin >> a;
	judge(a) && cout << "YES" ||
		cout << "NO";
	cout <<endl;
	return 0;
}
