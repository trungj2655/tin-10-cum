#include <fstream>
using namespace std;
size_t f(size_t x) {
    size_t d, sum{};
    while(x != 0) {
        d = x % 10;
        sum += d * d;
        x /= 10;
    }
    return sum;
}
int main() {
    ifstream in("DAYXN.INP");
    ofstream out("DAYXN.OUT");
    size_t x, n;
    in >> x >> n;
    out << x;
    while(--n) out << ' ' << (x = f(x));
    in.close();
    out.close();
}
