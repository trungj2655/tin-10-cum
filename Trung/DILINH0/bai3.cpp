#include <fstream>
#include <vector>
#include <limits>
using namespace std;
int main() {
    size_t n, sum1{}, sum2{};
    size_t min_v = numeric_limits<size_t>::max();
    ifstream in("bai3.inp");
    ofstream out("bai3.out");
    in >> n;
    vector<size_t> a(n);
    vector<size_t> min_i;
    for(size_t i{}; i < n; ++i) {
        in >> a[i];
        sum2 += a[i];
    }
    in.close();
    for(size_t i{}; i < n; ++i) {
        size_t diff = (sum1 < sum2) ? (sum2 - sum1) : (sum1 - sum2);
        if(diff < min_v) {
            min_v = diff;
            min_i.assign(1, i);
        } else if(diff == min_v) {
            min_i.push_back(i);
        }
        sum1 += a[i];
        sum2 -= a[i];
    }
    for(size_t i : min_i) {
        size_t j{};
        for(; j < i; ++j) out << a[j] << ' ';
        out << '\n';
        for(; j < n; ++j) out << a[j] << ' ';
        out << '\n';
    }
    out.close();
}
