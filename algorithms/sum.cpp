#include<iostream>
#include<vector>
#include<string>
#define ll long long
void solve(int tc) {
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
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