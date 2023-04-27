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

int bad_t(int n) {
    int c = 0;
    while (n) {
        ++c;
        n /= 2;
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(15);
    cout << fixed;
    int t; cin >> t;
    while (t--) {
        map<char, int> mp;
        string s; cin >> s;
        forn(i, sz(s)) ++mp[s[i]];
        int ans = 1e9;
        forit(it, mp) {
            char cur = it->first;
            int c = 0;
            forn(i, sz(s)) {
                if (s[i] == cur) continue;
                int j = i + 1;
                while (j < sz(s) && s[j] != cur) ++j;
                c = max(c, bad_t(j - i));
                i = j;
            }
            ans = min(ans, c);
        }
        cout << ans << '\n';
    }
}