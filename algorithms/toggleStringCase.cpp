#include<iostream>
#include<vector>
#include<string>
#define ll long long
using namespace std;
void solve(int tc) {
    string str, toggled;
    cin >> str;
    toggled = str;
    for (int i = 0; i < toggled.length(); i++) {
        char c = str.at(i);
        c = (isupper(c)) ? tolower(c) : toupper(c);
        toggled[i] = c;
    }
    cout << toggled << endl;
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