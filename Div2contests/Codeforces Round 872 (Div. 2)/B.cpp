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


void solve() {
    int n, m; cin >> n >> m;
    vector<li> v(n * m);
    forn(i, n * m) cin >> v[i];
    sort(all(v));
    li ans1 = v.back() * n * m - v.back() - min(v.front() * n * (m - 1) + v[1] * (n - 1), v.front() * m * (n - 1) + v[1] * (m - 1));
    li ans2 = max(v.back() * n * (m - 1) + v[sz(v) - 2] * (n - 1), v.back() * m * (n - 1) + v[sz(v) - 2] * (m - 1)) - (v.front() * n * m - v.front());
    cout << max(ans1, ans2) << '\n';
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