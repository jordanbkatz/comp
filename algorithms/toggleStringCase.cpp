#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#define ll long long
void solve(int tc) {
    std::string str, toggled;
    std::cin >> str;
    toggled = str;
    for (int i = 0; i < toggled.length(); i++) {
        char c = str.at(i);
        c = isupper(c) ? tolower(c) : toupper(c);
        toggled[i] = c;
    }
    std::cout << toggled << std::endl;
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