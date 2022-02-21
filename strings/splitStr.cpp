#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
vector<string> splitStr(const string str, const char delim) {
    vector<string> split;
    string temp;
    for (const auto &c : str) {
        if (c != delim) {
            temp += c;
        }
        else {
            split.push_back(temp);
            temp.clear();
        }
    }
    split.push_back(temp);
    return split;
}
void solve(const int &tc) {
    string str = "hello,world";
    logVal(&str);
    vector<string> strings = splitStr(str, ',');
    logIter(&strings);
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
template <typename T> void logIter(const T *iter) {
    cout << iter << " => { ";
    for (const auto &ele : *iter) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}