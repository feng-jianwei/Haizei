#include <iostream>
#include <iomanip>
using namespace std;

int loopTime = 6;

double cal(int &num) {
	double res = 0;
	int mid;
	while (loopTime--) {
		res += num;
		res *= 1.00417;
	}
	return res;
}

int main() 
{
	int n;
	cin >> n;
	cout << '$' << fixed << setprecision(2) << cal(n) << endl;
	return 0;
}
