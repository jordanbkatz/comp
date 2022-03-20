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
        string s;
        cin >> s;
        vector<pair<char, int>> v;
        for (const auto &c : s) {
            bool found = false;
            for (auto &p : v) {
                if (p.first == c) {
                    p.second++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                v.push_back(make_pair(c, 1));
            }
        }
        bool possible = false;
        if (this->checkValid(v)) {
            possible = true;
        }
        else {
            for (int i = 0; i < v.size(); i++) {
                vector<pair<char, int>> vec = v;
                vec[i].second--;
                if (vec[i].second == 0) {
                    vec.erase(vec.begin() + i);
                }
                if (this->checkValid(vec)) {
                    possible = true;
                    break;
                }
            }
        }
        cout << ((possible) ? "YES" : "NO");
    }
    private:
    bool checkValid(vector<pair<char, int>> &v) {
        bool valid = true;
        for (const auto &p : v) {
            if (p.second != v[0].second) {
                valid = false;
                break;
            }
        }
        return valid;
    }
};
int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    //cin >> tc;
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