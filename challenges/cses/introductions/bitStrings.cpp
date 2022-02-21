#include<bits/stdc++.h>
#define long long long int
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
const int MOD = 1e9 + 7;
void solve(const int &tc) {
    int n;
    cin >> n;
    long bitStrs = 2;
    for (int i = 1; i < n; i++) {
        bitStrs = (bitStrs * 2) % MOD;
    }
    cout << bitStrs << endl;
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
template <typename T> void logVec(const vector<T> *vec) {
    cout << vec << " => { ";
    for (const auto &ele : *vec) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}