#include <iostream>
#include <string>
using namespace std;
string binary(size_t n) {
    if(n == 0) return string("0");
    string s;
    while(n != 0) {
        s.push_back((n & 1) ? '1' : '0');
        n >>= 1;
    }
    return s;
}
int main() {
    size_t n;
    cin >> n;
    string s = binary(n);
    for(auto it = s.crbegin(); it != s.crend(); ++it) cout << *it;
}
