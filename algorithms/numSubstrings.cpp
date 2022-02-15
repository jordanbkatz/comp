#include<bits/stdc++.h>
#define ll long long
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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }
    return 0;
}