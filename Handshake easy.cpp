#include <iostream>
#define ull unsigned long long

using namespace std;

int main() {

	ull n = 0;
	ull ans = 0;
	
	cin >> n;

	if (n == 1) {
		ans = 0;
	}
	else {
		ans = (n * (n - 1)) / 2;
	}

	cout << ans << '\n';








	return 0;
}
