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
class Bigint {
    public:
    string val;
    Bigint(string start) {
        val = start;
        this->removeLeadingZeros();
    }
    void add(string num) {
        if (val[0] != '-' && num[0] == '-') {
            num.erase(num.begin());
            this->sub(num);
        }
        else if (val[0] == '-' && num[0] != '-') {
            num = "-" + num;
            this->sub(num);
        }
        else {
            bool negative = false;
            if (val[0] == '-' && num[0] == '-') {
                negative = true;
                val.erase(val.begin());
                num.erase(num.begin());
            }
            if (val.size() < num.size()) {
                swap(val, num);
            }
            reverse(all(val));
            reverse(all(num));
            for (int i = 0; i < num.size(); i++) {
                int a = val[i] - '0';
                int b = num[i] - '0';
                val[i] = ((a + b) % 10) + '0';
                if (a + b > 9) {
                    if (i == val.size() - 1) {
                        val.push_back('1');
                    }
                    else {
                        bool carry = true;
                        int j = 1;
                        while (carry) {
                            if (val[i + j] == '9') {
                                val[i + j] = '0';
                                j++;
                                if (i + j == val.size()) {
                                    val.push_back('1');
                                    break;
                                }
                            }
                            else {
                                val[i + j]++;
                                carry = false;
                            }
                        }
                    }
                }
            }
            if (negative) {
                val.push_back('-');
            }
            reverse(all(val));
        }
        this->removeLeadingZeros();
    }
    void sub(string num) {
        if (val[0] != '-' && num[0] == '-') {
            num.erase(num.begin());
            this->add(num);
        }
        else if (val[0] == '-' && num[0] != '-') {
            num = '-' + num;
            this->add(num);
        }
        else {
            bool negative = false;
            if (val[0] == '-' && num[0] == '-') {
                if (this->compare(num) == -1) {
                    negative = true;
                }
                else {
                    swap(val, num);
                }
                val.erase(val.begin());
                num.erase(num.begin());
            }
            else if (val[0] != '-' && num[0] != '-') {
                if (this->compare(num) == -1) {
                    negative = true;
                    swap(val, num);
                }
            }
            reverse(all(val));
            reverse(all(num));
            for (int i = 0; i < num.size(); i++) {
                int a = val[i] - '0';
                int b = num[i] - '0';
                val[i] = ((a - b + 10) % 10) + '0';
                if (b > a) {
                    bool carry = true;
                    int j = 1;
                    while (carry) {
                        if (val[i + j] == '0') {
                            val[i + j] = '9';
                            j++;
                        }
                        else {
                            val[i + j]--;
                            carry = false;
                        }
                    }
                }
            }
            if (negative) {
                val.push_back('-');
            }
            reverse(all(val));
        }
        this->removeLeadingZeros();
    }
    void mul(string num) {
        bool negative = false;
        if (val[0] != '-' && num[0] == '-') {
            negative = true;
            num.erase(num.begin());
        }
        else if (val[0] == '-' && num[0] != '-') {
            negative = true;
            val.erase(val.begin());
        }
        else if (val[0] == '-' && num[0] == '-') {
            val.erase(val.begin());
            num.erase(num.begin());
        }
        string increment = val;
        val = "0";
        for (Bigint i("0"); i.val != num; i.add("1")) {
            this->add(increment);
        }
        if (negative) {
            val = "-" + val;
        }
        this->removeLeadingZeros();
    }
    void div(string num) {
        bool negative = false;
        if (val[0] != '-' && num[0] == '-') {
            negative = true;
            num.erase(num.begin());
        }
        else if (val[0] == '-' && num[0] != '-') {
            negative = true;
            val.erase(val.begin());
        }
        else if (val[0] == '-' && num[0] == '-') {
            val.erase(val.begin());
            num.erase(num.begin());
        }
        Bigint count("0");
        while (this->compare(num) > -1) {
            this->sub(num);
            count.add("1");
        }
        val = count.val;
        if (negative) {
            val = "-" + val;
        }
        this->removeLeadingZeros();
    }
    void mod(string num) {
        bool negative;
        if (num[0] == '-') {
            num.erase(num.begin());
        }
        if (val[0] == '-') {
            negative = true;
            val.erase(val.begin());
        }
        else if (val[0] == '-' && num[0] == '-') {
            negative = true;
            val.erase(val.begin());
            num.erase(num.begin());
        }
        while (this->compare(num) > -1) {
            this->sub(num);
        }
        if (negative) {
            val = "-" + val;
        }
        this->removeLeadingZeros();
    }
    void pow(string num) {
        if (num[0] == '-') {
            val = "0";
        }
        else {
            string base = val;
            val = "1";
            for (Bigint i("0"); i.val != num; i.add("1")) {
                this->mul(base);
            }
        }
        this->removeLeadingZeros();
    }
    int compare(string num) {
        int c;
        if (val == num) {
            c = 0;
        }
        else if (val[0] != '-' && num[0] == '-') {
            c = 1;
        }
        else if (val[0] == '-' && num[0] != '-') {
            c = -1;
        }
        else {
            bool negative = (val[0] == '-');
            if (val.size() > num.size()) {
                c = (negative) ? -1 : 1;
            }
            else if (val.size() < num.size()) {
                c = (negative) ? 1 : -1;
            }
            else {
                for (int i = 0; i < val.size(); i++) {
                    if (val[i] > num[i]) {
                        c = (negative) ? -1 : 1;
                        break;
                    }
                    else if (val[i] < num[i]) {
                        c = (negative) ? 1 : -1;
                        break;
                    }
                }
            }
        }
        return c;
    }
    private:
    void removeLeadingZeros() {
        if (val[0] == '0' && val.size() != 1) {
            val.erase(val.begin());
            this->removeLeadingZeros();
        }
        else if (val[0] == '-' && val[1] == '0') {
            if (val.size() == 2) {
                val = "0";
            }
            else {
                val.erase(val.begin() + 1);
                this->removeLeadingZeros();
            }
        }
    }
};
class Solution {
    public:
    Solution(const int &tc) {
        int n;
        cin >> n;
        Bigint f("1");
        for (int i = 1; i <= n; i++) {
            f.mul(to_string(i));
        }
        cout << f.val;
    }
    private:
};
int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        Solution solve(i);
    }
    return 0;
}