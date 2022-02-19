#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
template <typename T> void logVal(const string, const T &);
template <typename T> void logVec(const string, const vector<T> &);
template <typename T> pair<int, T> minEle(const vector<T>);
void solve(const int &tc) {
    vector<int> vec = {3, 5, 9, 1, 3};
    pair<int, int> mini = minEle(vec);
    logVec("vector", vec);
    logVal("index", mini.first);
    logVal("minimum", mini.second);
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
template <typename T> void logVal(const string name, const T &val) {
    cout << name << " => " << val << endl;
}
template <typename T> void logVec(const string name, const vector<T> &vec) {
    cout << name << " => { ";
    for (const auto &ele : vec) {
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