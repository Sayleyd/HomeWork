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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(15);
    cout << fixed;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        forn(i, n) cin >> a[i];
        int lb = 0, rb = n - 1;
        bool f = false;
        forn(i, n) {
            cin >> b[i];
            if (b[i] != a[i]) {
                if (!f) {
                    f = true;
                    lb = i;
                }
                rb = i;
            }
        }
        while (lb != 0 && b[lb - 1] <= b[lb]) --lb;
        while (rb != n - 1 && b[rb + 1] >= b[rb]) ++rb;
        cout << lb + 1 << " " << rb + 1 << '\n';
    }
}