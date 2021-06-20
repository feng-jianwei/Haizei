#include <iostream>
using namespace std;
constexpr int MAX_N = 10000;
int prime[MAX_N];

void init()
{
	for (int i = 2; i < MAX_N; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > MAX_N) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
}

bool judge(const int &num)
{
	for (int i = 1; i < 10; i++) {
		if (i * i == num) {
			return true;
		}
	}
	return false;
}

int main()
{
	init();
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	for (int i = 1; i <= prime[0] && prime[i] <= b; i++) {
		if (prime[i] < a) continue;
		if (judge(prime[i] / 100) && judge(prime[i] % 100)) {
			!cnt || cout << ' ';
			cout << prime[i];
			cnt++;
		}
	}
	cout << endl << cnt << endl;
	return 0;
}
