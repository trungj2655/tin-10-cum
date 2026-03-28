#include <cmath>
#include <fstream>
using namespace std;
int main() {
    size_t n;
    ifstream in("CPL.INP");
    ofstream out("CPL.OUT");
    in >> n;
    size_t N = trunc( sqrt(n) );
    if(!(N & 1)) --N;
    out << (N+1)/2 << '\n' << (N*(N+1)*(N+2))/6;
    in.close();
    out.close();
}
