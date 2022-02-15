#include<bits/stdc++.h>
using namespace std;
int a, b, emeralds;
void solve() {
    cin >> a >> b;
    emeralds = 0;
    while ((a >= 2 && b >= 1) || (a >= 1 && b >= 2)) {
        if (a >= b) {
            a -= 2;
            b -= 1;
        }
        else {
            a -= 1;
            b -= 2;
        }
        emeralds++;
    }
    cout << emeralds << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }
    return 0;
}