#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define LOCAL
#define ln '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#ifdef LOCAL
#define dbg(x) cout << #x << " => "; _P(x); cout << ln
#else
#define dbg(x)
#endif
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
template <typename T> void amin(T &x, T y) {if (x > y) x = y;}
template <typename T> void amax(T &x, T y) {if (x < y) x = y;}
const int MOD = 1e9 + 7;
namespace bigints {
    string add(string, string);
    void inc(string &, string);
    string sub(string, string);
    void dec(string &, string);
    string mul(string, string);
    string div(string, string);
    string mod(string, string);
    string pow(string, string);
    int compare(string, string);
    void removeLeadingZeros(string &);
    string add(string num1, string num2) {
        if (num1[0] != '-' && num2[0] == '-') {
            num2.erase(num2.begin());
            num1 = sub(num1, num2);
        }
        else if (num1[0] == '-' && num2[0] != '-') {
            num2 = "-" + num2;
            num1 = sub(num1, num2);
        }
        else {
            bool negative = false;
            if (num1[0] == '-' && num2[0] == '-') {
                negative = true;
                num1.erase(num1.begin());
                num2.erase(num2.begin());
            }
            if (num1.size() < num2.size()) {
                swap(num1, num2);
            }
            reverse(all(num1));
            reverse(all(num2));
            for (int i = 0; i < num2.size(); i++) {
                int a = num1[i] - '0';
                int b = num2[i] - '0';
                num1[i] = ((a + b) % 10) + '0';
                if (a + b > 9) {
                    if (i == num1.size() - 1) {
                        num1.push_back('1');
                    }
                    else {
                        bool carry = true;
                        int j = 1;
                        while (carry) {
                            if (num1[i + j] == '9') {
                                num1[i + j] = '0';
                                j++;
                                if (i + j == num1.size()) {
                                    num1.push_back('1');
                                    break;
                                }
                            }
                            else {
                                num1[i + j]++;
                                carry = false;
                            }
                        }
                    }
                }
            }
            if (negative) {
                num1.push_back('-');
            }
            reverse(all(num1));
        }
        removeLeadingZeros(num1);
        return num1;
    }
    void inc(string &num, string inc = "1") {
        num = add(num, inc);
        removeLeadingZeros(num);
    }
    string sub(string num1, string num2) {
        if (num1[0] != '-' && num2[0] == '-') {
            num2.erase(num2.begin());
            num1 = add(num1, num2);
        }
        else if (num1[0] == '-' && num2[0] != '-') {
            num2 = '-' + num2;
            num1 = add(num1, num2);
        }
        else {
            bool negative = false;
            if (num1[0] == '-' && num2[0] == '-') {
                if (compare(num1, num2) == -1) {
                    negative = true;
                }
                else {
                    swap(num1, num2);
                }
                num1.erase(num1.begin());
                num2.erase(num2.begin());
            }
            else if (num1[0] != '-' && num2[0] != '-') {
                if (compare(num1, num2) == -1) {
                    negative = true;
                    swap(num1, num2);
                }
            }
            reverse(all(num1));
            reverse(all(num2));
            for (int i = 0; i < num2.size(); i++) {
                int a = num1[i] - '0';
                int b = num2[i] - '0';
                num1[i] = ((a - b + 10) % 10) + '0';
                if (b > a) {
                    bool carry = true;
                    int j = 1;
                    while (carry) {
                        if (num1[i + j] == '0') {
                            num1[i + j] = '9';
                            j++;
                        }
                        else {
                            num1[i + j]--;
                            carry = false;
                        }
                    }
                }
            }
            if (negative) {
                num1.push_back('-');
            }
            reverse(all(num1));
        }
        removeLeadingZeros(num1);
        return num1;
    }
    void dec(string &num, string dec = "1") {
        num = sub(num, dec);
        removeLeadingZeros(num);
    }
    string mul(string num1, string num2) {
        bool negative = false;
        if (num1[0] != '-' && num2[0] == '-') {
            negative = true;
            num2.erase(num2.begin());
        }
        else if (num1[0] == '-' && num2[0] != '-') {
            negative = true;
            num1.erase(num1.begin());
        }
        else if (num1[0] == '-' && num2[0] == '-') {
            num1.erase(num1.begin());
            num2.erase(num2.begin());
        }
        string increment = num1;
        num1 = "0";
        for (string i = "0"; i != num2; inc(i)) {
            num1 = add(num1, increment);
        }
        if (negative) {
            num1 = "-" + num1;
        }
        removeLeadingZeros(num1);
        return num1;
    }
    string div(string num1, string num2) {
        bool negative = false;
        if (num1[0] != '-' && num2[0] == '-') {
            negative = true;
            num2.erase(num2.begin());
        }
        else if (num1[0] == '-' && num2[0] != '-') {
            negative = true;
            num1.erase(num1.begin());
        }
        else if (num1[0] == '-' && num2[0] == '-') {
            num1.erase(num1.begin());
            num2.erase(num2.begin());
        }
        string count = "0";
        while (compare(num1, num2) > -1) {
            dec(num1, num2);
            inc(count);
        }
        num1 = count;
        if (negative) {
            num1 = "-" + num1;
        }
        removeLeadingZeros(num1);
        return num1;
    }
    string mod(string num1, string num2) {
        bool negative;
        if (num2[0] == '-') {
            num2.erase(num2.begin());
        }
        if (num1[0] == '-') {
            negative = true;
            num1.erase(num1.begin());
        }
        else if (num1[0] == '-' && num2[0] == '-') {
            negative = true;
            num1.erase(num1.begin());
            num2.erase(num2.begin());
        }
        while (compare(num1, num2) > -1) {
            dec(num1, num2);
        }
        if (negative) {
            num1 = "-" + num1;
        }
        removeLeadingZeros(num1);
        return num1;
    }
    string pow(string num1, string num2) {
        if (num2[0] == '-') {
            num1 = "0";
        }
        else {
            string base = num1;
            num1 = "1";
            for (string i = "0"; i != num2; inc(i)) {
                num1 = mul(base, num1);
            }
        }
        removeLeadingZeros(num1);
        return num1;
    }
    int compare(string num1, string num2) {
        int c;
        if (num1 == num2) {
            c = 0;
        }
        else if (num1[0] != '-' && num2[0] == '-') {
            c = 1;
        }
        else if (num1[0] == '-' && num2[0] != '-') {
            c = -1;
        }
        else {
            bool negative = (num1[0] == '-');
            if (num1.size() > num2.size()) {
                c = (negative) ? -1 : 1;
            }
            else if (num1.size() < num2.size()) {
                c = (negative) ? 1 : -1;
            }
            else {
                for (int i = 0; i < num1.size(); i++) {
                    if (num1[i] > num2[i]) {
                        c = (negative) ? -1 : 1;
                        break;
                    }
                    else if (num1[i] < num2[i]) {
                        c = (negative) ? 1 : -1;
                        break;
                    }
                }
            }
        }
        return c;
    }
    void removeLeadingZeros(string &num) {
        if (num[0] == '0' && num.size() != 1) {
            num.erase(num.begin());
            removeLeadingZeros(num);
        }
        else if (num[0] == '-' && num[1] == '0') {
            if (num.size() == 2) {
                num = "0";
            }
            else {
                num.erase(num.begin() + 1);
                removeLeadingZeros(num);
            }
        }
    }
}
class Solution {
    public:
    Solution() {
        
    }
};
int main(int argc, char *argv[]) {
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastio;
    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        //cout << "Case #" << i << ": ";
        Solution solve;
    }
    return 0;
}