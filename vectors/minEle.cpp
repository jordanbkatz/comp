#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
template <typename T> pair<int, T> minEle(const vector<T>);
void solve(const int &tc) {
    vector<int> vec = {3, 5, 9, 1, 3};
    pair<int, int> mini = minEle(vec);
    logVec(&vec);
    logVal(&mini.first);
    logVal(&mini.second);
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
template <typename T> pair<int, T> minEle(const vector<T> vec) {
    pair<int, T> mini;
    for (int i = 0; i < vec.size(); i++) {
        if (i == 0 || vec[i] < mini.second) {
            mini.first = i;
            mini.second = vec[i];
        }
    }
    return mini;
}