#include <fstream>
using namespace std;
void match(size_t& A, size_t& B, size_t a, size_t b) {
    if(a < b) {
        B += 3;
    } else if(a == b) {
        ++A;
        ++B;
    } else {
        A += 3;
    }
}
int main() {
    size_t p, q, r, s, u, v, A{}, B{}, C{};
    ifstream in("FBALL.INP");
    ofstream out("FBALL.OUT");
    in >> p >> q >> r >> s >> u >> v;
    match(A, B, p, q);
    match(A, C, r, s);
    match(B, C, u, v);
    out << A << ' ' << B << ' ' << C;
    in.close();
    out.close();
}
