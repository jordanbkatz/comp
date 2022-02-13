#include<iostream>
#include<vector>
#include<string>
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
    int tc = 1;
    cin >> tc;
    while (tc > 0) {
        solve(tc);
        tc--;
    }
    return 0;
}