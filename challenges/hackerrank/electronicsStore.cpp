#include<bits/stdc++.h>
using namespace std;
#define LV(x) logVal(#x, x)
#define LI(x) logIter(#x, x)
#define LA(x, n) logArr(#x, x, n)
template <typename T> void logVal(const string, const T &);
template <typename T> void logIter(const string, const T &);
template <typename T> void logArr(const string, const T *, const unsigned int);
void solve(const int &tc) {
    int b, n, m;
    cin >> b >> n >> m;
    int keyboards[n], drives[m];
    for (int i = 0; i < n; i++) {
        cin >> keyboards[i];
    }
    sort(keyboards, keyboards + n);
    for (int i = 0; i < m; i++) {
        cin >> drives[i];
    }
    sort(drives, drives + m);
    int maxv = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (keyboards[i] + drives[j] > b) {
                break;
            }
            maxv = max(maxv, keyboards[i] + drives[j]);
        }
    }
    cout << maxv;
}
int main(int argc, char *argv[]) {
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
template <typename T> void logIter(const string name, const T &iter) {
    cout << name << " => { ";
    for (const auto &ele : iter) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}
template <typename T> void logArr(const string name, const T *arr, const unsigned int n) {
    cout << name << " => { ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}