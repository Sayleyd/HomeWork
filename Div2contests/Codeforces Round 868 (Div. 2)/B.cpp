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

#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define fore(i, l, r) for(int i = int(l); i < int(r); ++i)
#define forit(it, a) for (auto it = (a).begin(); it != (a).end(); ++it)
#define all(v) (v).begin(), (v).end()
#define y1 abh
#define sqr(x) ((x) * (x))
#define pb push_back
#define sz(a) int(a.size())

typedef long long ll;
typedef long double ld;

using namespace std;

clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

//ifstream in("input.txt");
//ofstream out("output.txt");


void  solve() {
    int n, k; cin >> n >> k;
    vector<int> p(n);
    map<int, vector<int>> mp;
    forn(i, k) {
        int j = i;
        while (j < n) {
            mp[i].pb(j + 1);
            j += k;
        }
    }
    int c = 0;
    forn(i, n) {
        cin >> p[i];
        if (lower_bound(all(mp[i % k]), p[i]) == mp[i % k].end() || *lower_bound(all(mp[i % k]), p[i]) != p[i]) ++c;
    }
    if (!c) cout << 0 << '\n';
    else cout << (c == 2 ? 1 : -1) << '\n';
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