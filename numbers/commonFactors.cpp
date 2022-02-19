#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
template <typename T> void logVal(const string, const T &);
template <typename T> void logVec(const string, const vector<T> &);
vector<int> commonFactors(const vector<int>);
void solve(const int &tc) {
    vector<int> vec = {16, 32, 64};
    logVec("vector", vec);
    logVec("common factors", commonFactors(vec));
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
vector<int> commonFactors(const vector<int> vec) {
    vector<int> factors;
    bool isFactor;
    for (int i = 1; i <= *min_element(vec.begin(), vec.end()); i++) {
        isFactor = true;
        for (const auto &ele : vec) {
            if (ele % i != 0) {
                isFactor = false;
            }
        }
        if (isFactor) {
            factors.pb(i);
        }
    }
    return factors;
}