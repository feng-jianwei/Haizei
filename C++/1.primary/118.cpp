#include <iostream>
using namespace std;

string arr[13] = { "",
	"rat", "ox", "tiger", "rabbit",
	"dragon", "snake", "horse", "sheep",
	"monkey", "rooster", "dog", "pig"
};

int init(const int &num) {
	int diff = num - 1900;
	while (diff >= 12) {
		diff -= 12;
	}
	while (diff < 0) {
		diff += 12;
	}
	return diff + 1;
}

int main()
{
	int year;
	cin >> year;
	cout << arr[init(year)] << endl;
	return 0;
}
