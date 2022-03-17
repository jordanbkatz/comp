#include<bits/stdc++.h>
#define lv(x) logVal(#x, x)
#define li(x) logIter(#x, x)
#define la(x, n) logArr(#x, x, n)
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int MXN = 2e5;
template <typename T> void logVal(const string, const T &);
template <typename T> void logIter(const string, const T &);
template <typename T> void logArr(const string, const T *, const unsigned int);
int n, k;
int arr[MXN];
void solve(const int &tc) {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int slider[k];
    for (int i = 0; i < n - k + 1; i++) {
        for (int j = 0; j < k; j++) {
            slider[j] = arr[i + j];
        }
        sort(slider, slider + k);
        if (k % 2 == 1) {
            cout << slider[(k - 1) / 2] << " ";
        }
        else {
            cout << slider[(k / 2) - 1] << " ";
        }
    }
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