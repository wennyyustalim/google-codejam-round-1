#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Case #"<< i+1 << ": ";
        int steps;
        string path;
        cin >> steps;
        cin >> path;
        for (int j = 0; j < path.length(); j++) {
            if (path[j] == 'S') {
                cout << 'E';
            } else {
                cout << 'S';
            }
        }
        cout << endl;
    }
    return 0;
}