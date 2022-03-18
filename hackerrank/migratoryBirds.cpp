#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
void solve(const int &tc) {
    int n;
    cin >> n;
    int temp;
    vector<int> birds(5);
    for (int i = 0; i < n; i++) {
        cin >> temp;
        birds[temp - 1]++;
    }
    int highest = 1;
    for (int i = 2; i <= 5; i++) {
        if (birds[i - 1] > birds[highest - 1]) {
            highest = i;
        }
    }
    cout << highest << endl;
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