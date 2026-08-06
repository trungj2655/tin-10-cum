#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <limits>
using namespace std;
int main() {
    size_t d, N, L, R, ans = numeric_limits<size_t>::max();
    ifstream in("MUASAM.INP");
    ofstream out("MUASAM.OUT");
    in >> N >> L >> R;
    vector<size_t> A(N);
    for(size_t i{}; i < N; ++i) in >> A[i];
    sort(A.begin(), A.end());
    auto end = upper_bound(A.cbegin(), A.cend(), R);
    for(auto itr = A.cbegin(); !((d = *itr*2) > R || itr == end); ++itr) {
        auto low = (d < L) ? lower_bound(next(itr), end, L - *itr) : next(itr);
        if(low != end) {
            size_t sum = *itr + *low;
            if(sum <= R) ans = min(ans, sum);
        }
    }
    out << ans;
    in.close();
    out.close();
}
