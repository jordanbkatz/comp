#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
void solve(const int &tc) {
    string str;
    cin >> str;
    vector<string> strings;
    sort(str.begin(), str.end());
    do {
        strings.push_back(str);
    } while (next_permutation(str.begin(), str.end()));
    sort(strings.begin(), strings.end());
    cout << strings.size() << endl;
    for (const auto &s : strings) {
        cout << s << endl;
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
template <typename T> void logIter(const T *iter) {
    cout << iter << " => { ";
    for (const auto &ele : *iter) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}