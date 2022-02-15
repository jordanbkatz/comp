#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
string str, toggled;
char c;
void solve(int &tc) {
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
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}