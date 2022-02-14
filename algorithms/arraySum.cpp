#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(int tc) {
    int length, sum = 0;
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}