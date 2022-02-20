#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
string toggleStrCases(string);
void solve(const int &tc) {
    string str = "Hello";
    logVal(&str);
    string toggled = toggleStrCases(str);
    logVal(&toggled);
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
template <typename T> void logVal(const T *val) {
    cout << val << " => " << *val << endl;
}
template <typename T> void logVec(const vector<T> *vec) {
    cout << vec << " => { ";
    for (const auto &ele : *vec) {
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