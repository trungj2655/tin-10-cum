#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
    size_t N;
    ll X, Y;
    ifstream in("BIENDOI.INP");
    ofstream out("BIENDOI.OUT");
    in >> N >> X >> Y;
    vector<ll> A(N);
    for(size_t x, i{}; i < N; ++i) {
        in >> x;
        A[i] = x + (x & 1 ? X : -Y);
    }
    in.close();
    for(ll i : A) out << i << ' ';
    out << '\n';
    sort(A.begin(), A.end());
    for(ll i : A) out << i << ' ';
    out.close();
}
