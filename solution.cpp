#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mod (int) 1e9 + 7
#define ln '\n'
#define vt vector
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define dbg(x) cout << #x << " => " << x << ln
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
    return os << "( " << p.ff << " " << p.ss << " )";
}
template<typename C, typename T = typename enable_if<!is_same<C, string>::value, typename C::value_type>::type>
ostream &operator<<(ostream &os, const C &c) {
    os << "[ "; for (const T &i : c) os << i << " "; return os << "] ";
}
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