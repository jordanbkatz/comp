#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
template <typename T> void logVal(const string, const T &);
template <typename T> void logVec(const string, const vector<T> &);
string toggleStrCases(string);
void solve(const int &tc) {
    string str = "Hello";
    logVal("before", str);
    logVal("after", toggleStrCases(str));
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
template <typename T> void logVec(const string name, const vector<T> &vec) {
    cout << name << " => { ";
    for (const auto &ele : vec) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}
string toggleStrCases(string str) {
    for (auto &cha : str) {
        cha = isupper(cha) ? tolower(cha) : toupper(cha);
    }
    return str;
}