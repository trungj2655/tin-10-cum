#include <fstream>
using namespace std;
bool prime(size_t n) {
    if(n < 2) return false;
    if(n < 4) return true;
    for(size_t i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    ifstream in("NGUYENTO.INP");
    ofstream out("NGUYENTO.OUT");
    size_t N, cnt{};
    in >> N;
    for(size_t i{}; i < N; ++i) {
        size_t n;
        in >> n;
        if(prime(n)) ++cnt;
    }
    out << cnt;
    in.close();
    out.close();
}
