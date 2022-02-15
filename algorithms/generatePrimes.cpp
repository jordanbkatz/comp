#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
int minimum, maximum;
vector<int> primes;
bool isPrime;
void solve(int &tc) {
    cin >> minimum >> maximum;
    primes.clear();
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
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << endl;
    }
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