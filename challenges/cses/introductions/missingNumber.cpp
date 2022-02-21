#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
void solve(const int &tc) {
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i <= v.size(); i++) {
        if (v[i] != i + 1) {
            cout << i + 1;
            break;
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
template <typename T> void logIter(const T *iter) {
    cout << iter << " => { ";
    for (const auto &ele : *iter) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}