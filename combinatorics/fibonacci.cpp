#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
long long fibonacci(const int n) {
    if (n != 0) {
        long long last = 0;
        long long fib = 1;
        for (int i = 0; i < n - 1; i++) {
            fib += last;
            last = fib - last;
        }
        return fib;
    }
    else {
        return 0;
    }
}
void solve(const int &tc) {
    vector<long long> vec;
    for (int i = 0; i <= 10; i++) {
        vec.push_back(fibonacci(i));
    }
    logIter(&vec);
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