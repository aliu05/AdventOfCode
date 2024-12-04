#include <bits/stdc++.h>
using namespace std;

typedef int64_t i64;

void solve_1() {
    string s;
    i64 ans = 0;
    while(getline(cin, s)) {
        i64 n = (i64)s.size();
        for(i64 i = 3; i < n; ++i) {
            if(s.substr(i-3, 4) == "mul(") {
                string x, y;
                x = y = "";
                i++;
                i64 tcount = 0;
                while(i < n && s[i] >= '0' && s[i] <= '9' && tcount < 3) {
                    x += s[i];
                    i++;
                    tcount++;
                }
                if(i >= n || s[i] != ',') {
                    i--;
                    continue;
                }
                i++;
                tcount = 0;
                while(i < n && s[i] >= '0' && s[i] <= '9' && tcount < 3) {
                    y += s[i];
                    i++;
                    tcount++;
                }
                if(i >= n || s[i] != ')') {
                    i--;
                    continue;
                }
                ans += stoll(x)*stoll(y);
            }
        }
    }
    cout << ans;
}

void solve_2() {
    string s;
    i64 ans = 0;
    bool doing = true;
    while(getline(cin, s)) {
        i64 n = (i64)s.size();
        for(i64 i = 3; i < n; ++i) {
            if(s.substr(i-3, 4) == "do()") doing = true;
            if(i > 5 && s.substr(i-6, 7) == "don't()") doing = false;
            if(doing && s.substr(i-3, 4) == "mul(") {
                string x, y;
                x = y = "";
                i++;
                i64 tcount = 0;
                while(i < n && s[i] >= '0' && s[i] <= '9' && tcount < 3) {
                    x += s[i];
                    i++;
                    tcount++;
                }
                if(i >= n || s[i] != ',') {
                    i--;
                    continue;
                }
                i++;
                tcount = 0;
                while(i < n && s[i] >= '0' && s[i] <= '9' && tcount < 3) {
                    y += s[i];
                    i++;
                    tcount++;
                }
                if(i >= n || s[i] != ')') {
                    i--;
                    continue;
                }
                ans += stoll(x)*stoll(y);
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