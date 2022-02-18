#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
template <typename T> void logVal(const string, const T &);
template <typename T> void logIter(const string, const T &);
ll fibonacci(int);
void solve(const int &tc) {
    vector<int> vec;
    for (int i = 0; i <= 10; i++) {
        vec.pb(fibonacci(i));
    }
    logIter("fibonaccis", vec);
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
template <typename T> void logIter(const string name, const T &iter) {
    cout << name << " => { ";
    for (const auto &ele : iter) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}
ll fibonacci(const int n) {
    ll last = 0;
    ll fib = 1;
    for (int i = 0; i < n; i++) {
        fib += last;
        last = fib - last;
    }
    return fib;
}