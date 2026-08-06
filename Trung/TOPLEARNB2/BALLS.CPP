#include <fstream>
#include <iterator>
#include <map>
using namespace std;
typedef long long ll;
constexpr size_t MOD = 1000000007;
struct cmp {
    bool operator()(size_t a, size_t b) const {
        return a > b;
    }
};
int main() {
    size_t N, K;
    ll ans{};
    ifstream in("BALLS.INP");
    ofstream out("BALLS.OUT");
    in >> N >> K;
    map<size_t, size_t, cmp> A{{0, 0}};
    for(size_t x, i{}; i < N; ++i) {
        in >> x;
        ++A[x];
    }
    size_t f1, s1, f2, cnt{}, sum{}, sz = A.size() - 1;
    auto itr = A.cbegin();
    auto end = next(itr, sz);
    for(size_t n; cnt < K && itr != end;) {
        f1 = itr->first, s1 = itr->second, f2 = (++itr)->first;
        n = f1 - f2;
        sum += s1;
        cnt += sum * n;
        ans = (ans + sum * (n*(f1+f2+1) / 2)) % MOD;
    }
    if(cnt > K) {
        size_t o = cnt - K, q = o / sum, r = o % sum;
        size_t offset = sum*(q*(2*f2+q+1)/2) + r*(f2+q+1);
        ans = (ans - offset) % MOD;
        if(ans < 0) ans += MOD;
    }
    out << ans;
    in.close();
    out.close();
}
