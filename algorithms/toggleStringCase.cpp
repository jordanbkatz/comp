#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
string str;
void solve(int &tc) {
    cin >> str;
    for (char &c : str) {
        c = isupper(c) ? tolower(c) : toupper(c);
    }
    cout << str << endl;
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