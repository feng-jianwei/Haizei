#include <iostream>
using namespace std;
constexpr int MAX_N = 100;

int prime[MAX_N + 5];
int is_prime[MAX_N + 5];
void init()
{
	for (int i = 2; i < MAX_N; i++) {
		if (!is_prime[i]) prime[++prime[0]] = i;
		for (int j = 0; j < prime[0]; j++) {
			if (prime[j + 1] * i > MAX_N) break;
			is_prime[prime[j + 1] * i] = 1;
			if (i % prime[j + 1] == 0 ) break;
		}
	}
	return;
}

bool is_pow(int num) 
{
	for (int i = 1; i < 10; i++) {
		if (num % i == 0 && num / i == i) {
			return true;
		}
	}
	return false;
}

bool judge(int &num) {
	if ((num % 6) || is_prime[num / 100]) {
		return false;
	}
	return is_pow(num % 100);
}

int main()
{
	int l, r;
	cin >> l >> r;
	int idx = 0;
	init();
	for (int i = l; i <= r; i++) {
		if (judge(i)) {
			idx == 0 || cout << ' ';
			cout << i;
			idx++;
		}
	}
	cout << endl << idx << endl;
	return 0;
}
