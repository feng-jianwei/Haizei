#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
	while (n--) {
		x = (float)x * 1.06 + (!n ? 0.5 : 0); 
	}
	cout << x << endl;
	return 0;
}
