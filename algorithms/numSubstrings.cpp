#include<bits/stdc++.h>
using namespace std;
string str;
int l, n;
void solve() {
    cin >> str;
    l = str.length();
    n = (l * (l + 1)) / 2;
    cout << n << endl;
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