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


void solve() {
    int n, k; cin >> n >> k;
    bool f = false;
    fore(i, 1, n + 1) {
        int cur = i * (i + 1) / 2 - i;
        if (i == 1) cur = 0;
        if (!f && cur == k && i == n) {
            cout << "YES\n";
            forn(p, i) cout << 1 << " ";
            f = true;
        }
        fore(j, 1, n + 1) {
            if (j != 1) {
                cur += j * (j + 1) / 2 - j;
            }
            if (!f && cur == k && i + j == n) {
                cout << "YES\n";
                forn(p, i) cout << 1 << "  ";
                forn(p, j) cout << -1 << " ";
                f = true;
            }
            cur -= j * (j + 1) / 2 - j;
        }
    }
    if (!f) cout << "NO";
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