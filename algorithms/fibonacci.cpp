#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
int n, start, last, fib;
void solve(int &tc) {
    cin >> n;
    start = 1;
    last = 0;
    fib = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0 && start == 0) {
            cout << last << endl;
            continue;
        }
        else {
            cout << fib << endl;
        }
        fib += last;
        last = fib - last;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}