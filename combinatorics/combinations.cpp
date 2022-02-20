#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
long long factorial(const int);
long long combinations(const int, const int);
void solve(const int &tc) {
    vector<long long> vec;
    for (int i = 0; i <= 10; i++) {
        vec.push_back(combinations(i, 2));
    }
    logVec(&vec);
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
long long factorial(const int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}
long long combinations(const int n, const int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}