#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
typedef long long ll;
const int MOD = 1e9 + 7;
vector<ll> dp;
void solve(const int &tc) {
    dp.push_back(0);
    dp.push_back(1);
    for (ll i = 2; i <= 10; i++) {
        dp.push_back((dp[i - 1] + dp[i - 2]) % MOD);
    }
    logIter(&dp);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}
template <typename T> void logVal(const T *val) {
    cout << val << " => " << *val << endl;
}
template <typename T> void logIter(const T *iter) {
    cout << iter << " => { ";
    for (const auto &ele : *iter) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}