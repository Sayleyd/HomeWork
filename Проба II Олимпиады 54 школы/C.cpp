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


int get_len(int n) {
    int c = 0;
    while (n) {
        ++c;
        n /= 10;
    }
    return c;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(15);
    cout << fixed;
    int a, b, n, m; cin >> a >> b >> n >> m;
    int p1 = get_len(a), p2 = get_len(b);
    if (p1 + n == p2 + m) {
        string f = to_string(a), s = to_string(b);
        int i = 0;
        while (i < sz(f) && i < sz(s) && f[i] == s[i]) ++i;
        if (i == min(sz(f), sz(s))) {
            if (sz(f) > sz(s)) {
                while (i != sz(f) && f[i] == '9') ++i;
                if (i != sz(f)) cout << "Nikita";
                else cout << "Draw";
            }
            else if (sz(f) < sz(s)) {
                while (i != sz(s) && s[i] == '9') ++i;
                if (i != sz(s)) cout << "Arthur";
                else cout << "Draw";
            }
            else cout << "Draw";
        }
        else {
            cout << (f[i] > s[i] ? "Arthur" : "Nikita");
        }
    }
    else {
        cout << (p1 + n > p2 + m ? "Arthur" : "Nikita");
    }
}