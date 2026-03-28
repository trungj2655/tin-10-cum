#include <fstream>
using namespace std;
int main() {
    size_t N, K, T, c{};
    ifstream in("DHANG.INP");
    ofstream out("DHANG.OUT");
    in >> N >> K >> T;
    for(size_t x, i{}; i < N; ++i) {
        in >> x;
        if(x > K && x % T == 0) {
            out << x << ' ';
            ++c;
        }
    }
    if(c == 0) {
        out << "KHONG\n0";
    } else {
        out << '\n' << c;
    }
    in.close();
    out.close();
}
