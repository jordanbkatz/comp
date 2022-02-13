#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(int tc) {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
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