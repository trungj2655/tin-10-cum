#include <fstream>
#include <array>
using namespace std;
const array<size_t, 8> s{{16, 64, 19, 95, 26, 65, 49, 98}};
int main() {
    size_t T;
    ifstream in("FRAC.INP");
    ofstream out("FRAC.OUT");
    in >> T;
    for(size_t a, b, i{}; i < T; ++i) {
        bool c = false;
        in >> a >> b;
        for(size_t j{}; !c && j < 8; j += 2) c = (a == s[j] && b == s[j + 1]);
        out << (c ? "YES\n" : "NO\n");
    }
    in.close();
    out.close();
}
