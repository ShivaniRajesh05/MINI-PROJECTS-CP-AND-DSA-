#include <bits/stdc++.h>
using namespace std;

string encode(string str, int n) {
    string copy = str;
    for (int i = 0; i < str.length(); i++) {
        char lower, upper;
        // Checks the case of the letter and whether it is letter
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower = 'A';
            upper = 'Z';
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lower = 'a';
            upper = 'z';
        } else {
            return "Invalid Character";
        }

        // Encoding with shift
        if (str[i] + n > upper) {
            copy[i] = str[i] - 26 + n;
        } else if (str[i] + n < lower) {
            copy[i] = str[i] + 26 + n;
        } else {
            copy[i] = str[i] + n;
        }
    }
    return copy;
}

int main() {
    string ori, copy;
    int n;
    cout << "Enter the string to be encoded: ";
    cin >> ori;
    cout << "Enter the shift: ";
    cin >> n;
    copy = encode(ori, n);
    cout << "The encoded string is: " << copy;
    return 0;
} 
