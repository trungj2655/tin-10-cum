#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    size_t n, k, ans{};
    ifstream in("PTREE.INP");
    ofstream out("PTREE.OUT");
    in >> n >> k;
    vector<size_t> h(n);
    for(size_t i{}; i < n; ++i) in >> h[i];
    sort(h.begin(), h.end());
    for(size_t i = n; --i; ans += i - distance(h.begin(), lower_bound(h.begin(), h.begin() + i, h[i] - k)));
    out << ans;
    in.close();
    out.close();
}
