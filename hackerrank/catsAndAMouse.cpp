#include<bits/stdc++.h>
using namespace std;
#define PV(x) printVal(#x, x)
#define PI(x) printIter(#x, x)
#define PA(x, n) printArr(#x, x, n)
template <typename T> void printVal(const string, const T &);
template <typename T> void printIter(const string, const T &);
template <typename T> void printArr(const string, const T *, const unsigned int);
class Solution {
    public:
    Solution(const int &tc) {
        int x, y, z;
        cin >> x >> y >> z;
        if (abs(z - x) < abs(z - y)) {
            cout << "Cat A";
        }
        else if (abs(z - x) > abs(z - y)) {
            cout << "Cat B";
        }
        else {
            cout << "Mouse C";
        }
        cout << endl;
    }
    private:
};
int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        Solution solve(i);
    }
    return 0;
}
template <typename T> void printVal(const string name, const T &val) {
    cout << name << " => " << val << endl;
}
template <typename T> void printIter(const string name, const T &iter) {
    cout << name << " => { ";
    for (const auto &ele : iter) {
        cout << ele << " ";
    }
    cout << "}" << endl;
}
template <typename T> void printArr(const string name, const T *arr, const unsigned int n) {
    cout << name << " => { ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}