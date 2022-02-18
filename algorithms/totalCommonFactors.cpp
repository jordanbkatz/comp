#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
template <typename T> void logVal(const string, const T &);
template <typename T> void logIter(const string, const T &);
int n, x, cnt;
bool boo;
vector<int> vec;
void solve(const int &tc) {
    cin >> n;
    vec.clear();
    for (int i = 0; i < n; i++) {
        cin >> x;
        vec.pb(x);
    }
    cnt = 1;
    for (int i = *min_element(vec.begin(), vec.end()); i > 1; i--) {
        boo = true;
        for (const auto &ele : vec) {
            if (ele % i != 0) {
                boo = false;
            }
        }
        if (boo) {
            cnt++;
        }
    }
    cout << "Case #" << tc << ": " << cnt << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
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