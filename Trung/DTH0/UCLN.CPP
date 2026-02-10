#include <fstream>
#include <numeric>
using namespace std;
int main() {
    ifstream in("UCLN.INP");
    ofstream out("UCLN.OUT");
    size_t N, M;
    in >> N >> M;
    out << gcd(N, M);
    in.close();
    out.close();
}
