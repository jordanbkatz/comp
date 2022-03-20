#include<bits/stdc++.h>
using namespace std;
#define lv(x) logVal(#x, x)
#define li(x) logIter(#x, x)
#define la(x, n) logArr(#x, x, n)
template <typename T> void logVal(const string, const T &);
template <typename T> void logIter(const string, const T &);
template <typename T> void logArr(const string, const T *, const unsigned int);
void solve(const int &tc) {
    int n;
    cin >> n;
    int a[n];
    set<int> unique;
    int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        unique.insert(a[i]);
    }
    cout << unique.size();
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