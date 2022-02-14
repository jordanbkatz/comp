#include<iostream>
#include<vector>
#include<string>
#define ll long long
using namespace std;
void solve(int tc) {
    string str, reversed;
    cin >> str;
    reversed = str;
    for (int i = 0; i < reversed.length(); i++) {
        reversed[reversed.length() - i - 1] = str.at(i);
    }
    cout << reversed << endl;
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