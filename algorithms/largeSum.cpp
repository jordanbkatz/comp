#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
int length;
ll n, sum;
void solve(int &tc) {
    cin >> length;
    sum = 0;
    for (int i = 0; i < length; i++) {
        cin >> n;
        sum += n;
    }
    cout << sum << endl;
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