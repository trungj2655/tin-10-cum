#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <limits>
using namespace std;
int main() {
    int q;
    string s;
    vector<int> A;
    getline(cin, s);
    stringstream ss(s);
    for(int n, p = numeric_limits<int>::max(); ss >> n; p = n) {
        if(n > p) {
            cout << -1;
            return 1;
        }
        A.push_back(n);
    }
    cin >> q;
    for(size_t l{}, r = A.size() - 1, m; l <= r;) {
        m = (l + r) / 2;
        if(A[m] == q) {
            cout << m;
            return 0;
        } else if(A[m] > q) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << -1;
    return 1;
}
