#include <iostream>
#include <cstdio>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <stack>

#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define fore(i, l, r) for(int i = int(l); i < int(r); ++i)
#define forit(it, a) for (auto it = (a).begin(); it != (a).end(); ++it)
#define all(v) (v).begin(), (v).end()
#define y1 abh
#define sqr(x) ((x) *(x))
#define pb push_back
#define sz(a) int(a.size())

typedef long long li;
typedef long double ld;

using namespace std;

clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

//ifstream in("input.txt");
//ofstream out("output.txt");

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(15);
    cout << fixed;
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> l(n), r(n);
        int sum_ = 0, cnt = 0, ans = 2e9;
        bool f = false;
        forn(i, n) cin >> l[i];
        forn(i, n) {
            cin >> r[i];
            sum_ += r[i] - l[i] + 1;
            if (r[i] == l[i]) ++cnt;
            if (sum_ >= k) ans = min(ans, 2 * (i + 1 - min(sum_ - k, cnt)) + r[i] - (sum_ - k) + min(sum_ - k, cnt));
        }
        cout << (ans == 2e9 ? -1 : ans) << '\n';
    }
}