#include <fstream>
#include <cmath>
using namespace std;
int main() {
    size_t k;
    ifstream in("bai1.inp");
    ofstream out("bai1.out");
    in >> k;
    in.close();
    size_t n = static_cast<size_t>( ceil( sqrt(1./4. + 2 * k) - 1./2. ) );
    size_t diem = n * (n + 1) / 2;
    out << n << '\n' << diem;
    out.close();
}
