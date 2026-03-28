#include <unordered_map>
#include <fstream>
using namespace std;
size_t sum_digits(size_t n) {
    size_t res{};
    while(n != 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int main() {
    size_t n, ans{};
    ifstream in("BPAIRS.INP");
    ofstream out("BPAIRS.OUT");
    in >> n;
    unordered_map<size_t, size_t> m;
    for(size_t x, i{}; i < n; ++i) {
        in >> x;
        ++m[sum_digits(x)];
    }
    for(const auto& [k, v] : m) {
        if(v != 1) ans += v*(v-1)/2;
    }
    out << ans;
    in.close();
    out.close();
}
