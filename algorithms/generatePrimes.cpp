#include<iostream>
#include<vector>
#include<string>
#define ll long long
void solve(int tc) {
    int minimum, maximum;
    std::cin >> minimum >> maximum;
    std::vector<int> primes;
    for (int i = std::max(2, minimum); i < maximum; i++) {
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
        std::cout << primes[i] << std::endl;
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int tc = 1;
    std::cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}