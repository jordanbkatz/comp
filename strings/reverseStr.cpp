#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
string reverseStr(const string);
void solve(const int &tc) {
    string str = "Hello";
    logVal(&str);
    string reversed = reverseStr(str);
    logVal(&reversed);
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
string reverseStr(const string str) {
    string reversed = str;
    for (int i = 0; i < reversed.length(); i++) {
        reversed[reversed.length() - i - 1] = str[i];
    }
    return reversed;
}