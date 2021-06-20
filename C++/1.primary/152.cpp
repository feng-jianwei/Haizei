#include <iostream>
#include <string>

using namespace std;
string arr[] = {
	"Monday", "Tuesday", "Wednesday",
	"Thursday", "Friday", "Saturday", "Sunday"
};
int main()
{
	int num;
	cin >> num;
	cout << arr[(num + 2) % 7] << endl;
}
