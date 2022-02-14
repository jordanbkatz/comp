#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(int tc) {
    string str;
    cin >> str;
    int l = str.length();
    int n = (l * (l + 1)) / 2;
    cout << n << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}