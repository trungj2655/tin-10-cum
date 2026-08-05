// Bai 2 @ assets/DE THI HSG 11 NAM 2024-2025 CAP TRUONG.docx
#include <fstream>
#include <unordered_map>
typedef long long ll;
using namespace std;
int main() {
    size_t N, ans{};
    ll K;
    ifstream in("LUCKY.INP");
    ofstream out("LUCKY.OUT");
    in >> N >> K;
    unordered_map<ll, size_t> freq;
    for(size_t i{}; i < N; ++i) {
        ll x, t1, t2;
        in >> x;
        t1 = K - x, t2 = -K - x;
        if(freq.find(t1) != freq.end()) {
            ans += freq[t1];
        }
        if(freq.find(t2) != freq.end()) {
            ans += freq[t2];
        }
        ++freq[x];
    }
    out << ans;
    in.close();
    out.close();
}
