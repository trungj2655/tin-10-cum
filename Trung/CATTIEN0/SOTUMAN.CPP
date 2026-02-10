#include <fstream>
#include <set>
using namespace std;
bool tuman(size_t n) {
    size_t d, sum{}, x = n;
    while(n != 0) {
        d = n % 10;
        sum += d * d * d;
        n /= 10;
    }
    return x == sum;
}
int main() {
    ifstream in("SOTUMAN.INP");
    ofstream out("SOTUMAN.OUT");
    size_t N;
    in >> N;
    multiset<size_t> A;
    for(size_t i{}; i < N; ++i) {
        size_t n;
        in >> n;
        if(tuman(n)) A.insert(n);
    }
    for(size_t i : A) out << i << ' ';
    in.close();
    out.close();
}
