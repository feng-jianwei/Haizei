#include<iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	c == 'a' && cout << "It is good" << endl ||
		c == 'b' && cout << "OMG" << endl ||
		c == 'c' && cout << "Yes!" << endl;
	return 0;
}
