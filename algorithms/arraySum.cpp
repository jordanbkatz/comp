#include<bits/stdc++.h>
using namespace std;
int length, n, sum;
void solve() {
    sum = 0;
    cin >> length;
    for (int i = 0; i < length; i++) {
        cin >> n;
        sum += n;
    }
    cout << sum << endl;
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