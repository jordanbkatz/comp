#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define ln '\n'
#define vt vector
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define dbg(x) cout << #x << " => "; _P(x); cout << ln
template <typename T> void _P(T &);
template <typename T, typename V> void _P(pair<T, V> &);
template <typename T> void _P(vector<T> &);
template <typename T> void _P(set<T> &);
template <typename T, typename V> void _P(map<T, V> &);
template <typename T> void _P(T &x) {cout << x << " ";}
template <typename T, typename V> void _P(pair<T, V> &p) {cout << "( "; _P(p.ff); _P(p.ss); cout << ") ";}
template <typename T> void _P(vector<T> &v) {cout << "[ "; for (T &x : v) _P(x); cout << "] ";}
template <typename T> void _P(set<T> &s) {cout << "{ "; for (const T &x : s) _P(x); cout << "} ";}
template <typename T, typename V> void _P(map<T, V> &m) {cout << "{ "; for (auto x: m) _P(x); cout << "} ";}
const int MOD = (int) 1e9 + 7;
namespace solution {
    void solve() {
        
    }
}
int main(int argc, char *argv[]) {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    fastio;
    int tc = 1;
    // cin >> tc;
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solution::solve();
    }
    return 0;
}