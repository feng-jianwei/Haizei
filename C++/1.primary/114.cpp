#include <unordered_map>
#include <iostream>
#include <utility>
using namespace std;

unordered_map<char, string> myMap;

void init()
{
	myMap.emplace(make_pair('h', "He"));
	myMap.emplace(make_pair('l',"Li"));
	myMap.emplace(make_pair('c', "Cao"));
	myMap.emplace(make_pair('d',"Duan"));
	myMap.emplace(make_pair('w', "Wang"));
	return;
}

int main()
{
	init();
	char c;
	cin >> c;
	myMap.count(c) && cout << myMap[c] ||
		cout << "Not Here";
	cout << endl;
	return 0;
}
