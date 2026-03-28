#include <fstream>
using namespace std;
int main() {
    size_t n;
    ifstream in("DEMCAP.INP");
    ofstream out("DEMCAP.OUT");
    in >> n;
    in.close();
    size_t N = n / 2;
    out << N*(n-N-1);
    out.close();
}
