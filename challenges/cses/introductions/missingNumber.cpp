#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
const unsigned int MOD = 1e9 + 7;
void solve(const int &tc) {
    int n, x;
    bool found;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        vec.push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        found = false;
        for (const auto &val : vec) {
            if (val == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << i << endl;
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