#include<iostream>
#include<vector>
#include<string>
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
    int tc = 1;
    cin >> tc;
    while (tc > 0) {
        solve(tc);
        tc--;
    }
    return 0;
}