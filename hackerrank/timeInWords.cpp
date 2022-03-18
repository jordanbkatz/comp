#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logIter(const T *);
void solve(const int &tc) {
    int h, m;
    cin >> h >> m;
    const vector<string> names = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"
    };
    if (m == 0) {
        cout << names[h] << " o' clock" << endl;
    }
    else if (m == 15) {
        cout << "quarter past " << names[h] << endl;
    }
    else if (0 < m && m < 30) {
        if (m <= 20) {
            cout << names[m];
        }
        else {
            cout << names[20] << " " << names[m - 20];
        }
        cout << " " << (m == 1 ? "minute" : "minutes") << " past " << names[h] << endl; 
    }
    else if (m == 30) {
        cout << "half past " << names[h] << endl;
    }
    else if (m == 45) {
        cout << "quarter to " << names[++h] << endl;
    }
    else if (30 < m && m < 60) {
        if (m >= 40) {
            cout << names[60 - m];
        }
        else {
            cout << names[20] << " " << names[40 - m];
        }
        cout << " minutes to " << names[++h] << endl;
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