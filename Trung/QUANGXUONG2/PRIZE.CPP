#include <functional>
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    size_t m, n;
    ifstream in("PRIZE.INP");
    ofstream out("PRIZE.OUT");
    in >> m >> n;
    vector<size_t> p(m);
    for(size_t i{}; i < m; ++i) in >> p[i];
    in.close();
    auto nth = p.begin() + n - 1;
    nth_element(p.begin(), nth, p.end(), greater{});
    out << *nth * n;
    out.close();
}
