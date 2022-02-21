#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
void solve(const int &tc) {
    string str;
    cin >> str;
    char c = str[0];
    int count = 1, maxCount = 1;
    for (int i = 1; i < str.size(); i++) {
        if (str[i] == c) {
            count++;
            maxCount = max(maxCount, count);
        }
        else {
            c = str[i];
            count = 1;
        }
    }
    cout << maxCount << endl;
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