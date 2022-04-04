# Comp
## Jordan Katz
### Description
A repository for my competitive programming workspace.
### Dependencies
* git
* c++ compiler
### Installation
`git clone https://github.com/jordanbkatz/comp.git`
### Usage
`g++ -DLOCAL -std=c++11 sol.cpp -o sol && ./sol && rm sol`
### Solution Template
```cpp
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#define ll long long
#define vt vector
#define pb push_back
#define mp make_pair
#define a first
#define b second
#define endl '\n'
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#ifdef LOCAL
#define dbg(x) cout << #x << " => " << x << endl
#else
#define dbg(x)
#endif
using namespace std;
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
    return os << "( " << p.a << " " << p.b << " )";
}
template<typename C, typename T = typename enable_if<!is_same<C, string>::value, typename C::value_type>::type>
ostream &operator<<(ostream &os, const C &c) {
    os << "[ "; for (const T &i : c) os << i << " "; return os << "]";
}
namespace solution {
    void solve() {
        
    }
}
int main() {
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastio;
    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solution::solve();
    }
    return 0;
}
```