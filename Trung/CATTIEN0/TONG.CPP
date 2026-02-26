#include <fstream>
#include <iomanip>
using namespace std;
int main() {
    ifstream in("TONG.INP");
    ofstream out("TONG.OUT");
    double S{};
    size_t n;
    in >> n;
    for(size_t i = 1; i <= n; ++i) S += 1. / (i * i);
    out << fixed << setprecision(3) << S;
    in.close();
    out.close();
}