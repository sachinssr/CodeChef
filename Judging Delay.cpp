#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int s[100], j[100], n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> s[i] >> j[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		if(abs(s[i] - j[i]) > 5) cnt++;
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	return 0;
}