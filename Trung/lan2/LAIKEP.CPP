#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream in("LAIKEP.INP");
    ofstream out("LAIKEP.OUT");
    size_t G, N;
    double L;
    in >> G >> L >> N;
    double res = G * pow(1 + L / 100, N);
    out << fixed << setprecision(2) << res;
    in.close();
    out.close();
}
