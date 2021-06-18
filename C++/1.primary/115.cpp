#include <iostream>
#include <type_traits>
using namespace std;

int main()
{
	int target, actual;
	cin >> target >> actual;
	target == actual && cout << "100" ||
		target % 10 == actual / 10 && target / 10 == actual % 10 && cout << "20" ||
		(target % 10 == actual / 10 || target / 10 == actual % 10 || target % 10 == actual % 10 || 
		 target / 10 == actual / 10) && cout << "2" || cout << "0";
	cout << endl;
	return 0;
}
