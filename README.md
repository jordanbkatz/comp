# Comp
## Jordan Katz
### Description
A repository for my competitive programming.
### Template
This can also be found in the template.cpp file in the root directory.
```cpp
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(int tc) {
    cout << tc << endl;
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
```
### Explanation
```cpp
#include<bits/stdc++.h>
```
Includes header files.
```cpp
#define ll long long
```
Defines ll macro for long long.
```cpp
using namespace std;
```
Uses std namespace; gets rid of need for writing std:: everytime.
```cpp
void solve(int tc) {
    cout << tc << endl;
}
```
Function that will run for each test case to solve the problem.
```cpp
ios::sync_with_stdio(false);
cin.tie(NULL);
```
Disables the synchronizations of C and C++ I/O streams.
```cpp
int tc = 1;
```
Default number of test cases is set 1.
```cpp
cin >> tc;
```
First line of input will set the number of test cases. Comment this line out if their is only one test case or the number is predefined and you can edit the value in the line above.
```cpp
for (int i = 1; i <= tc; i++) {
    solve(i);
}
```
Runs solve function for each test case, passing the test number in as the argument.
### License
MIT