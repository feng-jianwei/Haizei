#include <iostream>
#include <cstdio>
#include <ctime>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string str;
	stringstream ss;
	getline(cin, str, '\n');
	ss << str;
	while (ss >> str) {}
	cout << str.size() << endl;
	return 0;
}

