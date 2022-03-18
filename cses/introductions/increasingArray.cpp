#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
void solve(const int &tc) {
    int n, x;
    cin >> n;
    vector<long long> vec;
    for (int i = 0; i < n; i++) {
        cin >> x;
        vec.push_back(x);
    }
    long long last = vec[0], moves = 0;
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] < last) {
            moves += last - vec[i];
        }
        else {
            last = vec[i];
        }
    }
    cout << moves << endl;
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