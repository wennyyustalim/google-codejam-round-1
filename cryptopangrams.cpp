#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long findInSet (long num, set<long>& alphabet_map) {
    set<long>::iterator it;
    it = find (alphabet_map.begin(), alphabet_map.end(), num);
    if (it != alphabet_map.end()) {
        return distance(alphabet_map.begin(), it); 
    } else {
        return -1;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin >> n;
    for (long i = 0; i < n; i++) {
        cout << "Case #"<< i+1 << ": ";
        long N, L;
        cin >> N;
        cin >> L;
        vector<long> products;
        for (long j = 0; j < L; j++) {
            long product;
            cin >> product;
            products.push_back(product);
        }
        vector<long> gcds;
        gcds.push_back(products[0]/gcd(products[0], products[1]));
        for (long j = 0; j < products.size()-1; j++) {
            gcds.push_back(gcd(products[j], products[j+1]));
        }
        gcds.push_back(products[products.size()-1]/gcds[gcds.size()-1]);
        set<long> alphabet_map(gcds.begin(), gcds.end());
        for (long gcd : gcds) {
            char c = findInSet(gcd, alphabet_map) + 65;
            cout << c;
        }
        cout << "\n";
    }
    return 0;
}