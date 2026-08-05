// Bài 1 @ assets/DE THI HSG 11 NAM 2024-2025 CAP TRUONG.docx
#include <fstream>
#include <vector>
#include <limits>
using namespace std;
typedef long long ll;
int main() {
    size_t N;
    ifstream in("STAR.INP");
    ofstream out("STAR.OUT");
    in >> N;
    size_t sz = N * 2;
    ll ans = numeric_limits<ll>::min();
    vector<ll> g(sz);
    for(size_t i = 0; i < sz; i += 2) in >> g[i];
    for(size_t i = 1; i < sz; i += 2) in >> g[i];
    vector<ll> dist(g);
    for(size_t i = 0; i < sz; ++i) {
        for(size_t j = (i & 1) ? (i + 1) : (i + 3); j < sz; j += 2) {
            ans = max(ans, dist[j] = max(dist[j], dist[i] + g[j]));
        }
    }
    out << ans;
    in.close();
    out.close();
}
