#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
template <typename T> void logVal(const string, const T &);
template <typename T> void logVec(const string, const vector<T> &);
ll factorial(int);
ll catalan(int);
void solve(const int &tc) {
    vector<int> vec;
    int x;
    for (int i = 0; i <= 10; i++) {
        vec.pb(catalan(i));
    }
    logVec("catalans", vec);
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
template <typename T> void logVal(const string name, const T &val) {
    cout << name << " => " << val << endl;
}
template <typename T> void logVec(const string name, const vector<T> &vec) {
    cout << name << " => { ";
    for (const auto &ele : vec) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}
ll factorial(const int n) {
    ll f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}
ll catalan(const int n) {
    return factorial(2 * n) / (factorial(n + 1) * factorial(n));
}