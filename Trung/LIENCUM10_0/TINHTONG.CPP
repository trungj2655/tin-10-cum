#include <fstream>
using namespace std;
int main() {
    size_t N, S{};
    ifstream in("TINHTONG.INP");
    ofstream out("TINHTONG.OUT");
    in >> N;
    for(size_t i = 1; i <= N; ++i) S += N / i;
    out << S;
    in.close();
    out.close();
}
