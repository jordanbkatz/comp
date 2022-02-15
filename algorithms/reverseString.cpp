#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str, reversed;
void solve() {
    cin >> str;
    reversed = str;
    for (int i = 0; i < reversed.length(); i++) {
        reversed[reversed.length() - i - 1] = str[i];
    }
    cout << reversed << endl;
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