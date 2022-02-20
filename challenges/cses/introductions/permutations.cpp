#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
const unsigned int MOD = 1e9 + 7;
void solve(const int &tc) {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "1" << endl;
    }
    else {
        vector<int> vec;
        for (int i = 1; i <= n; i++) {
            vec.push_back(i);
        }
        bool anyBeautiful = false, beautiful;
        while (next_permutation(vec.begin(), vec.end())) {
            beautiful = true;
            for (int i = 0; i < vec.size(); i++) {
                if (abs(vec[i] - vec[i - 1]) == 1) {
                    beautiful = false;
                }
            }
            if (beautiful) {
                anyBeautiful = true;
                for (const auto &val : vec) {
                    cout << val << " ";
                }
                cout << endl;
                break;
            }
        }
        if (!anyBeautiful) {
            cout << "NO SOLUTION" << endl;
        }
    }
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