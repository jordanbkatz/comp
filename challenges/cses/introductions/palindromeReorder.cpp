#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
void solve(const int &tc) {
    string str;
    cin >> str;
    vector<int> chars(26);
    int start = 65;
    for (const auto &c : str) {
        chars[((int) c) - start]++;
    }
    bool possible = true;
    int odds = 0;
    char odd;
    for (int i = 0; i < chars.size(); i++) {
        if (chars[i] % 2 == 1) {
            odds++;
            odd = (char) (i + start);
            if (odds > 1) {
                possible = false;
                break;
            }
        }
    }
    string palindrome;
    if (possible) {
        for (int i = 0; i < chars.size(); i++) {
            if ((char) (i + start) == odd) {
                continue;
            }
            for (int j = 0; j < chars[i] / 2; j++) {
                palindrome += (char) (i + start);
            }
        }
        for (int i = 0; i < chars[((int) odd) - start]; i++) {
            palindrome += odd;
        }
        for (int i = chars.size() - 1; i >= 0; i--) {
            if ((char) (i + start) == odd) {
                continue;
            }
            for (int j = 0; j < chars[i] / 2; j++) {
                palindrome += (char) (i + start);
            }
        }
    }
    else {
        palindrome = "NO SOLUTION";
    }
    cout << palindrome << endl;
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