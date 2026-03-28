#include <cmath>
#include <fstream>
using namespace std;
int main() {
    size_t n, m, k;
    ifstream in("BANH.INP");
    ofstream out("BANH.OUT");
    in >> n >> m >> k;
    double ans = n * m;
    if(n >= k) ans *= 0.8;
    out << trunc(ans);
    in.close();
    out.close();
}
