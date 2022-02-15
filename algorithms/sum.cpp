#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a, b;
void solve() {
    cin >> a >> b;
    cout << a + b << endl;
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