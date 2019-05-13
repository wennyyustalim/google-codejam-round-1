#include <bits/stdc++.h>
using namespace std;

void printPairs(string& a_str) {
	string b_str(a_str.length(), '0');
    for (int i = 0; i < a_str.length(); i++) {
        if (a_str[i] == '4') {
            a_str[i] = '3';
            b_str[i] = '1';
        }
    }
    b_str.erase(0, b_str.find_first_not_of('0'));
    cout << a_str << " " << b_str << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string num;
        cin >> num;
        cout << "Case #"<< i+1 << ": ";
        printPairs(num);
    }
    return 0;
}