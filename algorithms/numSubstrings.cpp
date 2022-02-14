#include<iostream>
#include<vector>
#include<string>
#define ll long long
void solve(int tc) {
    std::string str;
    std::cin >> str;
    int l = str.length();
    int n = (l * (l + 1)) / 2;
    std::cout << n << std::endl;
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