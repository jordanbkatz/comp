#include<iostream>
#include<vector>
#include<string>
#define ll long long
void solve(int tc) {
    std::string str, reversed;
    std::cin >> str;
    reversed = str;
    for (int i = 0; i < reversed.length(); i++) {
        reversed[reversed.length() - i - 1] = str.at(i);
    }
    std::cout << reversed << std::endl;
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