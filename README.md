# Comp
## Jordan Katz
### Description
A repository for my competitive programming.
### Template
This can also be found in the template.cpp file in the root directory.
```cpp
#include<bits/stdc++.h>
#define pf push_front
#define pb push_back
#define ll long long
using namespace std;
void solve(int &tc) {

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}
```
### Explanation
Include header files.
```cpp
#include<bits/stdc++.h>
```
Define macros for adding elements to front and back of vectors.
```cpp
#define pf push_front
#define pb push_back
```
Define macro for long long type
```cpp
#define ll long long
```
Uses std namespace.
```cpp
using namespace std;
```
Function that will run for each test case to solve the problem. Passes current test case # by reference.
```cpp
void solve(int &tc) {

}
```
Disables the synchronizations of I/O streams.
```cpp
ios::sync_with_stdio(false);
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
### License
MIT