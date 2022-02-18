#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
template <typename T> void logVal(const string, const T &);
template <typename T> void logIter(const string, const T &);
vector<int> primes(int, int);
void solve(const int &tc) {
    vector<int> vec;
    vec = primes(0, 10);
    logIter("primes", vec);
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
            primes.pb(i);
        }
    }
    return primes;
}