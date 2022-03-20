#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define dbg(x) cout << #x << " => "; _P(x); cout << endl;
typedef long long int ll;
const int MOD = 1e9 + 7;
template <typename T> void _P(T &x) {cout << x << " ";};
template <typename T, typename V> void _P(pair<T, V> &p) {cout << "(" << p.ff << ", " << p.ss << ") ";};
template <typename T> void _P(vector<T> &v) {cout << "[ "; for (T &x : v) {_P(x);} cout << "]";}
template <typename T> void _P(set<T> &s) {cout << "{ "; for (const T &x : s) {_P(x);} cout << "}";}
template <typename T, typename V> void _P(map<T, V> &m) {cout << "{ "; for (auto x: m) {_P(x);} cout << "}";}
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