#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define dbg(x) cout << #x << " => "; _P(x); cout << endl
typedef long long int ll;
const int MOD = 1e9 + 7;
template <typename T> void _P(T &x) {cout << x << " ";};
template <typename T, typename V> void _P(pair<T, V> &p) {cout << "( " << p.ff << ", " << p.ss << " ) ";};
template <typename T> void _P(vector<T> &v) {cout << "[ "; for (T &x : v) {_P(x);} cout << "] ";}
template <typename T> void _P(set<T> &s) {cout << "{ "; for (const T &x : s) {_P(x);} cout << "} ";}
template <typename T, typename V> void _P(map<T, V> &m) {cout << "{ "; for (auto x: m) {_P(x);} cout << "} ";}
namespace numbers {
    map<string, vector<string>> words = {
        {"ones", {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}},
        {"teens", {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"}},
        {"tens", {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}},
        {"large", {"hundred", "thousand", "million", "billion", "trillion"}}
    };
}
class Solution {
    public:
    Solution(const int &tc) {
        int sum = 0;
        for (int i = 1; i <= 1e3; i++) {
            sum += this->numWordSize(i);
        }
        cout << sum;
    }
    private:
    int numWordSize(int n) {
        int size = 0;
        string conjunction = "and";
        if (n >= 1 && n < 10) {
            size += numbers::words["ones"][n].size();
        }
        else if (n >= 10 && n < 20) {
            size += numbers::words["teens"][n - 10].size();
        }
        else if (n >= 20 && n < 100) {
            size += numbers::words["tens"][n / 10].size() + numbers::words["ones"][n % 10].size();
        }
        else if (n >= 100 && n < 1000) {
            size += numbers::words["ones"][n / 100].size() + numbers::words["large"][0].size();
            if (n % 100 != 0) {
                size += conjunction.size();
                size += this->numWordSize(n % 100);
            }
        }
        else if (n == 1000) {
            size += numbers::words["ones"][1].size() + numbers::words["large"][1].size();
        }
        return size;
    }
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