#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
template <typename T> void logVal(const string, const T &);
template <typename T> void logIter(const string, const T &);
string reverseStr(const string);
void solve(const int &tc) {
    string str = "Hello";
    logVal("before", str);
    logVal("after", reverseStr(str));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}
template <typename T> void logVal(const string name, const T &val) {
    cout << name << " => " << val << endl;
}
template <typename T> void logIter(const string name, const T &iter) {
    cout << name << " => { ";
    for (const auto &ele : iter) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}
string reverseStr(const string str) {
    string reversed = str;
    for (int i = 0; i < reversed.length(); i++) {
        reversed[reversed.length() - i - 1] = str[i];
    }
    return reversed;
}