#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
int s, n, primary, secondary, diff;
vector<vector<int>> arr;
vector<int> row;
void solve(int &tc) {
    cin >> s;
    arr.clear();
    for (int i = 0; i < s; i++) {
        row.clear();
        for (int j = 0; j < s; j++) {
            cin >> n;
            row.pb(n);
        }
        arr.pb(row);
    }
    primary = 0;
    secondary = 0;
    for (int i = 0; i < arr.size(); i++) {
        primary += arr[i][i];
        secondary += arr[arr.size() - i - 1][i];
    }
    diff = abs(primary - secondary);
    cout << diff << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}