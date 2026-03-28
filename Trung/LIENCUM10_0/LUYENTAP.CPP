#include <algorithm>
#include <numeric>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    size_t n, m;
    ifstream in("LUYENTAP.INP");
    ofstream out("LUYENTAP.OUT");
    in >> n >> m;
    vector<size_t> a(n), b(m), sum(m);
    for(size_t i{}; i < n; ++i) in >> a[i];
    for(size_t i{}; i < m; ++i) in >> b[i];
    sort(b.begin(), b.end());
    partial_sum(b.cbegin(), b.cend(), sum.begin());
    for(size_t i : a) {
        size_t j = i;
        vector<size_t>::const_iterator it = b.cbegin(), itr;
        while((itr = upper_bound(it, b.cend(), j)) != it) {
            j = i + sum[distance(b.cbegin(), it = itr) - 1];
        }
        out << j << ' ';
    }
    in.close();
    out.close();
}
