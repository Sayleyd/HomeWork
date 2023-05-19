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
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n), c(n), t;
    map<int, vector<int>> mp;
    forn(i, n) cin >> a[i];
    t = a;
    sort(all(a));
    forn(i, n) {
        cin >> b[i];
        mp[a[i]].pb(i);
    }
    sort(all(b));
    forn(i, n) {
        c[i] = b[mp[t[i]].front()];
        mp[t[i]].erase(mp[t[i]].begin());
    }
    forn(i, n) cout << c[i] << ' ';
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