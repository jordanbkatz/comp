#include<iostream>
#include<vector>
#include<string>
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
    int tc = 1;
    cin >> tc;
    while (tc > 0) {
        solve(tc);
        tc--;
    }
    return 0;
}