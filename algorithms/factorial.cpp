#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
int n, factorial;
void solve(int &tc) {
    cin >> n;
    factorial = n;
    for (int i = --n; i > 0; i--) {
        factorial *= i;
    }
    cout << factorial << endl;
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