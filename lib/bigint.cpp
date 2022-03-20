#include<bits/stdc++.h>
using namespace std;
#define PV(x) printVal(#x, x)
#define PI(x) printIter(#x, x)
#define PA(x, n) printArr(#x, x, n)
template <typename T> void printVal(const string, const T &);
template <typename T> void printIter(const string, const T &);
template <typename T> void printArr(const string, const T *, const unsigned int);
class Bigint {
    public:
    string val;
    Bigint(string start) {
        val = start;
        this->removeLeadingZeros();
    }
    void add(string num) {
        if (val[0] != '-' && num[0] == '-') {

        }
        else if (val[0] == '-' && num[0] != '-') {

        }
        else {
            bool negative = false;
            if (num[0] == '-' && val[0] == '-') {
                negative = true;
                val.erase(val.begin());
                num.erase(num.begin());
            }
            if (val.size() < num.size()) {
                swap(val, num);
            }
            reverse(val.begin(), val.end());
            reverse(num.begin(), num.end());
            for (int i = 0; i < num.size(); i++) {
                int a = val[i] - '0';
                int b = num[i] - '0';
                val[i] = ((a + b) % 10) + '0';
                if (a + b > 9) {
                    if (i == val.size() - 1) {
                        val.push_back('1');
                    }
                    else {
                        bool carry = true;
                        int j = 1;
                        while (carry) {
                            if (val[i + j] == '9') {
                                val[i + j] = '0';
                                j++;
                                if (i + j == val.size()) {
                                    val.push_back('1');
                                    break;
                                }
                            }
                            else {
                                val[i + j]++;
                                carry = false;
                            }
                        }
                    }
                }
            }
            if (negative) {
                val.push_back('-');
            }
            reverse(val.begin(), val.end());
        }
        this->removeLeadingZeros();
    }
    void subtract(string num) {
        if (val[0] != '-' && num[0] == '-') {
            num.erase(num.begin());
            this->add(num);
        }
        else if (val[0] == '-' && num[0] != '-') {
            num = '-' + num;
            this->add(num);
        }
        else {
            bool negative = false;
            if (val[0] == '-' && num[0] == '-') {
                negative = true;
                val.erase(val.begin());
                num.erase(num.begin());
            }
            reverse(val.begin(), val.end());
            reverse(num.begin(), num.end());
            for (int i = 0; i < num.size(); i++) {
                int a = val[i] - '0';
                int b = num[i] - '0';
                val[i] = ((a - b + 10) % 10) + '0';
                if (b > a) {
                    bool carry = true;
                    int j = 1;
                    while (carry) {
                        if (val[i + j] == '0') {
                            val[i + j] = '9';
                            j++;
                        }
                        else {
                            val[i + j]--;
                            carry = false;
                        }
                    }
                }
            }
            if (negative) {
                val.push_back('-');
            }
            reverse(val.begin(), val.end());
        }
        this->removeLeadingZeros();
    }
    void multiply(string num) {
        string increment = val;
        for (Bigint i("1"); i.val != num; i.add("1")) {
            this->add(increment);
        }
    }
    int compare(string num) {
        int c;
        if (val == num) {
            c = 0;
        }
        else if (val[0] != '-' && num[0] == '-') {
            c = 1;
        }
        else if (val[0] == '-' && num[0] != '-') {
            c = -1;
        }
        else {
            bool negative = (val[0] == '-');
            if (val.size() > num.size()) {
                c = (negative) ? -1 : 1;
            }
            else if (val.size() < num.size()) {
                c = (negative) ? 1 : -1;
            }
            else {
                for (int i = 0; i < val.size(); i++) {
                    if (val[i] > num[i]) {
                        c = (negative) ? -1 : 1;
                        break;
                    }
                    else if (val[i] < num[i]) {
                        c = (negative) ? 1 : -1;
                        break;
                    }
                }
            }
        }
        return c;
    }
    private:
    void removeLeadingZeros() {
        if (val[0] == '0' && val.size() != 1) {
            val.erase(val.begin());
            this->removeLeadingZeros();
        }
        else if (val[0] == '-' && val[1] == '0') {
            if (val.size() == 2) {
                val = "0";
            }
            else {
                val.erase(val.begin() + 1);
                this->removeLeadingZeros();
            }
        }
    }
};
int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Bigint x("-10");
    int a = x.compare("-5");
    PV(a);

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