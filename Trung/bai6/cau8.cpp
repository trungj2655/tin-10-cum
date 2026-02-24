#include <iostream>
#include <fstream>
using namespace std;
size_t tcs(size_t n) {
    size_t res{};
    while(n != 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int main() {
    ofstream out("bai8.out");
    size_t a, b;
    while(cin >> a >> b) out << (tcs(a) == tcs(b) ? '1' : '0') << '\n';
    out.close();
}
