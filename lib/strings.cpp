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
namespace strings {
    string remove(string s, char c) {
        string str;
        for (const auto &i : s) {
            if (i != c) {
                str.pb(i);
            }
        }
        return str;
    }
    vector<string> split(string str, char c) {
        vector<string> v = {""};
        for (const auto &i : str) {
            if (i != c) {
                v.back() += i;
            }
            else if (v.back() != "") {
                v.pb("");
            }
        }
        return v;
    }
}
int main() {
    string str = "sdfassfd";
    vector<string> v = strings::split(str, 's');
    dbg(v);
    return 0;
}