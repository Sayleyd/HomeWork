#include <iostream>
#include <cstdio>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <stack>
#include <utility>
#include <numeric>

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


const int MOD = 1e9 + 7;


void solve() {
    int n; cin >> n;
    vector<int> p(n);
    forn(i, n) cin >> p[i];
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    int cur = max_element(++p.begin(), p.end()) - p.begin();
    if (cur != 0) {
        int j = cur - 2;
        while (j > 0 && p[j] > p[0]) --j;
        if (cur == n - 1) {
            if (p[cur - 1] < p[0]) {
                cout << p[cur] << ' ';
                forn(i, n - 1) cout << p[i] << ' ';
                cout << '\n';
                return;
            }
        }
        fore(i, cur, n) cout << p[i] << ' ';
        for (int i = cur - 1; i > j; --i) cout << p[i] << ' ';
        fore(i, 0, j + 1) cout << p[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(15);
    cout << fixed;
    int t; cin >> t;
    while (t--) {
        solve();
    }
}