# Comp
## Jordan Katz
### Description
A repository for my competitive programming.
### Template
This can also be found in the template.cpp file in the root directory.
```cpp
#include<bits/stdc++.h>
using namespace std;
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
void solve(const int &tc) {

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
```
### Explanation
Include header files.
```cpp
#include<bits/stdc++.h>
```
Uses std namespace.
```cpp
using namespace std;
```
Logging function prototypes.
```cpp
template <typename T> void logVal(const T *);
template <typename T> void logVec(const vector<T> *);
```
Function that will run for each test case to solve the problem. Passes current test case # by reference.
```cpp
void solve(const int &tc) {

}
```
Disables the synchronization between I/O streams.
```cpp
ios_base::sync_with_stdio(false);
cin.tie(0);
```
Default number of test cases is set 1.
```cpp
int tc = 1;
```
Uncommenting this line sets the number of test cases to the first line of input.
```cpp
//cin >> tc;
```
Runs solve function for each test case, passing the test case # in as the argument.
```cpp
for (int i = 1; i <= tc; i++) {
    solve(i);
}
```
Logging template functions.
```cpp
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
```
### License
MIT