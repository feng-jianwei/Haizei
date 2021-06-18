#include <iomanip>
#include <iostream>
using namespace std;
constexpr double multiple = 2.3;
double cost;

double cal(int &far)
{
	double res = 0;
	if (far <= 3) {
		res = 13;
	} else {
		res = 13 + (far - 3) * multiple;
	}
	return res + 1;
}

int main()
{
	int N;
	cin >> N;
	cost = cal(N);
	cost == 14 && cout << cost << endl || 
	cout << setiosflags(ios::fixed) << setprecision(1) << cost << endl;
	return 0;
}
