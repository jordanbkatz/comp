#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
vector<int> primes(const int minimum, const int maximum) {
    vector<int> primes;
    bool isPrime;
    for (int i = max(2, minimum); i < maximum; i++) {
        isPrime = true;
        for (int j = 2; j < i - 1; j++) {
            if (i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
    return primes;
}
void solve(const int &tc) {
    int mini = 0;
    int maxi = 10;
    vector<int> vec = primes(mini, maxi);
    logVal(&mini);
    logVal(&maxi);
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