#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(int tc) {
    int minimum, maximum;
    cin >> minimum >> maximum;
    vector<int> primes;
    for (int i = max(2, minimum); i < maximum; i++) {
        bool isPrime = true;
        for (int j = 2; j < i - 1; j++) {
            if (i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}