#include <cstdlib>
#include <iostream>
using namespace std;

bool judge(const int &idx, const int &rank, const int &age, const int &work_year) {
	if (idx == 0 && rank > 50) {
		return false;
	}
	if (age > 25 && work_year < 5) {
		return false;
	}
	return true;
}

int main()
{
	int idx, rank, age, work_year;
	cin >> idx >> rank >> age >> work_year;
	cout << (judge(idx, rank, age, work_year) ? "ok" : "pass") << endl;
	return 0;
}
