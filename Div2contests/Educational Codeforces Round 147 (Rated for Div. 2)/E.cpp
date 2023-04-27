#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

void solve() {
	int k; cin >> k;
	string s; cin >> s;
	stack<int> st;
	int cur = 0;
	vector<int> p;
	long long ans = 0;
	for (int i = int(size(s) - 1); i >= 0; --i) {
		if (s[i] == ')') {
			ans += size(st);
			st.push(i);
		}
		else {
			p.push_back((st.top() - i) / 2);
			st.pop();
		}
	}
	sort(p.begin(), p.end());
	for (int i = 0; i < size(p) && i < k; ++i) {
		ans -= p[size(p) - 1 - i];
	}
	cout << ans << '\n';
}

int main() {
	int t; cin >> t;
	while (t--) solve();
}
