#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
void solve(const int &tc) {
    int n, temp;
    cin >> n;
    vector<int> ranked;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        ranked.push_back(temp);
    }
    int m, player, rank, last;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> player;
        rank = 1;
        last = ranked[0];
        bool notLast = false;
        for (int j = 0; j < ranked.size(); j++) {
            if (ranked[j] != last) {
                rank++;
            }
            if (player >= ranked[j]) {
                cout << rank << endl;
                notLast = true;
                break;
            }
            last = ranked[j];
        }
        if (!notLast) {
            cout << ++rank << endl;
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
template <typename T> void logIter(const T *iter) {
    cout << iter << " => { ";
    for (const auto &ele : *iter) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}