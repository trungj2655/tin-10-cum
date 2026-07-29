#include <fstream>
using namespace std;
bool special(size_t n) {
    size_t s = 1, i = 2;
    for(; i * i < n; ++i) {
        if(n % i == 0) s += i + n / i;
    }
    if(i * i == n) s += i;
    return s > n;
}
int main() {
    size_t A, B, ans{};
    ifstream in("SPECIAL.INP");
    ofstream out("SPECIAL.OUT");
    in >> A >> B;
    for(size_t i = A; i <= B; ++i) {
        if(special(i)) ++ans;
    }
    out << ans;
    in.close();
    out.close();
}
