#include <bits/stdc++.h>
using namespace std;

typedef int64_t i64;

void solve_1() {
    vector<i64> a, b;
    i64 x, y;
    while(cin >> x >> y) {
        a.push_back(x);
        b.push_back(y);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    i64 ans = 0;
    for(i64 i = 0; i < (i64)a.size(); ++i) ans += abs(a[i]-b[i]);
    cout << ans;
}

void solve_2() {
    vector<i64> a;
    map<i64, i64> b;
    i64 x, y;
    while(cin >> x >> y) {
        a.push_back(x);
        b[y]++;
    }
    
    i64 ans = 0;
    for(i64 e : a) ans += e * b[e];
    cout << ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // solve_1();
    solve_2();
    return 0;
}