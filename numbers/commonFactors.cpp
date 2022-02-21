#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
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
            factors.push_back(i);
        }
    }
    return factors;
}
void solve(const int &tc) {
    vector<int> vec = {16, 32, 64};
    logIter(&vec);
    vector<int> factors = commonFactors(vec);
    logIter(&factors);
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