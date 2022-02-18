#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
template <typename T> void logVal(const string, const T &);
template <typename T> void logIter(const string, const T &);
int l, tmp, c;
bool shares;
vector<int> v;
void solve(const int &tc) {
    cin >> l;
    v.clear();
    for (int i = 0; i < l; i++) {
        cin >> tmp;
        v.pb(tmp);
    }
    c = 1;
    for (int i = *min_element(v.begin(), v.end()); i > 1; i--) {
        shares = true;
        for (const auto &val : v) {
            if (val % i != 0) {
                shares = false;
            }
        }
        if (shares) {
            c++;
        }
    }
    cout << "Case #" << tc << ": " << c << endl;
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