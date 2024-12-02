#include <bits/stdc++.h>
using namespace std;

typedef int64_t i64;

void solve_1() {
    i64 ans = 0;
    string ln;
    while(getline(cin, ln)) {
        stringstream ss(ln);
        vector<i64> a;
        i64 x;
        while(ss >> x) a.push_back(x);
        
        bool inc = true, dec = true, gap = true;
        for(i64 i = 1; i < (i64)a.size(); ++i) {
            if(a[i] >= a[i-1]) dec = false;
            if(a[i] <= a[i-1]) inc = false;
            if(abs(a[i]-a[i-1]) > 3) gap = false;
        }

        if((dec || inc) && gap) ans++;
    }
    cout << ans;
}

void solve_2() {
    i64 ans = 0;
    string ln;
    while(getline(cin, ln)) {
        stringstream ss(ln);
        vector<i64> a;
        i64 x;
        while(ss >> x) a.push_back(x);
        
        // just brute :)
        for(i64 j = 0; j < (i64)a.size(); ++j) {
            bool inc = true, dec = true, gap = true;
            for(i64 i = 1; i < (i64)a.size(); ++i) {
                if(i == j) continue;
                i64 last;
                if(i == j+1) {
                    if(i == 1) continue;
                    last = i-2;
                }
                else last = i-1;
                if(a[i] >= a[last]) dec = false;
                if(a[i] <= a[last]) inc = false;
                if(abs(a[i]-a[last]) > 3) gap = false;
            }

            if((dec || inc) && gap) {
                ans++;
                break;
            }
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // solve_1();
    solve_2();
    return 0;
}