#include<bits/stdc++.h>
using namespace std;
string str, toggled;
char c;
void solve() {
    cin >> str;
    toggled = str;
    for (int i = 0; i < toggled.length(); i++) {
        c = str[i];
        c = isupper(c) ? tolower(c) : toupper(c);
        toggled[i] = c;
    }
    cout << toggled << endl;
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