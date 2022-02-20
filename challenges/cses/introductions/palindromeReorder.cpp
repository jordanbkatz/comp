#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
const unsigned int MOD = 1e9 + 7;
void solve(const int &tc) {
    string str;
    cin >> str;
    vector<int> chars(128, 0);
    for (const auto &c : str) {
        chars[(int)c]++;
    }
    bool possible = true;
    int odds = 0;
    char odd;
    for (int i = 65; i <= 90; i++) {
        if (chars[i] % 2 == 1) {
            odds++;
            odd = (char) i;
            if (odds > 1) {
                possible = false;
                break;
            }
        }
    }
    if (!possible) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        for (int i = 65; i <= 90; i++) {
            if ((char) i == odd) {
                continue;
            }
            for (int j = 0; j < chars[i] / 2; j++) {
                cout << (char) i;
            }
        }
        for (int i = 0; i < chars[(int) odd]; i++) {
            cout << odd;
        }
        for (int i = 90; i >= 65; i--) {
            if ((char) i == odd) {
                continue;
            }
            for (int j = 0; j < chars[i] / 2; j++) {
                cout << (char) i;
            }
        }
    }
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
template <typename T> void logVec(const vector<T> *vec) {
    cout << vec << " => { ";
    for (const auto &ele : *vec) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}