#include <fstream>
using namespace std;
int main() {
    size_t d, r, n;
    ifstream in("DAYXICH.INP");
    ofstream out("DAYXICH.OUT");
    in >> d >> r >> n;
    out << 2*r*n + d*(n-1);
    in.close();
    out.close();
}
