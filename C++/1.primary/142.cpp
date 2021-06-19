#include <iostream>
using namespace std;
int prime[100005];

void init()
{
	for (int i = 2; i < 100000; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 0; j < prime[0]; j++) {
			if (prime[j + 1] * i > 100000) break;
			prime[prime[j + 1] * i] = 1;
			if (i % prime[j + 1] == 0 ) break;
		}
	}
	return;
}

bool judge(int &num) {
	int res = num;
	int temp = 0;
	do {
		temp = 10 * temp + res % 10;
		res /= 10;
	} while (res);
	return temp == num;
}

int main()
{
	int l, r;
	cin >> l >> r;
	int idx = 0;
	init();
	for (int i = 1; i <= prime[0] && prime[i] <= r; i++) {
		if (prime[i] < l) continue;
		if (judge(prime[i])) {
			idx == 0 || cout << ' ';
			cout << prime[i];
			idx++;
		}
	}
	cout << endl;
	return 0;
}
