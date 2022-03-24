# Comp
## Jordan Katz
### Description
A repository for my original competitive programming solutions.
### Template
This can also be found in the template.cpp file in the root directory.
```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ar array
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define dbg(x) cout << #x << " => "; _P(x); cout << endl
template <typename T> void _P(T &);
template <typename T, typename V> void _P(pair<T, V> &);
template <typename T> void _P(vector<T> &);
template <typename T> void _P(set<T> &);
template <typename T, typename V> void _P(map<T, V> &);
template <typename T> void _P(T &x) {cout << x << " ";};
template <typename T, typename V> void _P(pair<T, V> &p) {cout << "( "; _P(p.ff); cout << ", "; _P(p.ss); cout << ") ";};
template <typename T> void _P(vector<T> &v) {cout << "[ "; for (T &x : v) {_P(x);} cout << "] ";}
template <typename T> void _P(set<T> &s) {cout << "{ "; for (const T &x : s) {_P(x);} cout << "} ";}
template <typename T, typename V> void _P(map<T, V> &m) {cout << "{ "; for (auto x: m) {_P(x);} cout << "} ";}
const int MOD = 1e9 + 7;
class Solution {
    public:
    Solution(const int &tc) {
        
    }
    private:
};
int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        Solution solve(i);
    }
    return 0;
}
```