#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
template <typename T> pair<T, int> getMode(vector<T> &v) {
    sort(v.begin(), v.end());
    pair<T, int> mode = make_pair(v[0], 1), temp = make_pair(v[0], 1);
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == temp.first) {
            temp.second++;
        }
        else {
            if (temp.second > mode.second) {
                mode = temp;
            }
            temp = make_pair(v[i], 1); 
        }
    }
    return mode;
}
void solve(const int &tc) {
    vector<int> v = {1, 2, 1, 3, 4, 3, 3, 3, 5, 5};
    logIter(&v);
    pair<int, int> mode = getMode(v);
    logVal(&mode.first);
    logVal(&mode.second);
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