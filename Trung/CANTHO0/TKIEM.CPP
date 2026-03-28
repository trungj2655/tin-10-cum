#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;
size_t ahh(size_t a, size_t b) {
    return min(2*a+1, 2*b+2);
}
int main() {
    bool oddity = true;
    size_t N, M, odd{}, even{};
    ifstream in("TKIEM.INP");
    ofstream out("TKIEM.OUT");
    in >> N >> M;
    vector<size_t> o, e;
    o.reserve(N/2);
    e.reserve(N/2);
    for(size_t x, i{}; i < N; ++i) {
        in >> x;
        if(oddity) {
            oddity = false;
            o.push_back(odd += x);
        } else {
            oddity = true;
            e.push_back(even += x);
        }
    }
    for(size_t x, i{}; i < M; ++i) {
        in >> x;
        auto O = lower_bound(o.cbegin(), o.cend(), x);
        auto E = lower_bound(e.cbegin(), e.cend(), x);
        if(O == o.cend() && E == e.cend()) {
            out << -1;
        } else {
            out << ahh(distance(o.cbegin(), O), distance(e.cbegin(), E));
        }
        out << '\n';
    }
    in.close();
    out.close();
}
