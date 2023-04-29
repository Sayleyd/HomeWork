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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(15);
    cout << fixed;
    int n; cin >> n;
    vector<int> v(n);
    int c1 = 0, c2 = 0;
    forn(i, n) {
        cin >> v[i];
        if ((i & 1) && (v[i] & 1)) ++c1;
        else if (!(i & 1) && (v[i] & 1)) ++c2;
    }
    if (!(n & 1)) {
        cout << min(c1, n / 2 - c1) + min(c2, n / 2 - c2);
    }
    else {
        cout << min(c1, n / 2 - c1) + min(c2, (n + 1) / 2 - c2);
    }
}