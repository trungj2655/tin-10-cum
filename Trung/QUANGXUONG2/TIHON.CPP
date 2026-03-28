#include <fstream>
using namespace std;
bool tihon(size_t n) {
    if(n <= 1) return false;
    size_t tong = 1, i = 2;
    for(; i * i < n; ++i) {
        if(n % i == 0) tong += i + (n / i);
    }
    if(i * i == n) tong += i;
    return n < tong;
}
int main() {
    size_t n, ans{};
    ifstream in("TIHON.INP");
    ofstream out("TIHON.OUT");
    in >> n;
    for(size_t x, i{}; i < n; ++i) {
        in >> x;
        if(tihon(x)) ++ans;
    }
    in.close();
    out << ans;
    out.close();
}
