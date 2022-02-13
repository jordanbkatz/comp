#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(int tc) {
    string str;
    cin >> str;
    int l = str.length();
    int n = (l * (l + 1)) / 2;
    cout << n << endl;
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