#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
int l, tmp, c;
bool shares;
vector<int> v;
void solve(int &tc) {
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
    cout << c << endl;
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