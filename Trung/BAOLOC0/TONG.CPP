#include <fstream>
using namespace std;
int main() {
    ifstream in("TONG.INP");
    ofstream out("TONG.OUT");
    size_t A, B, K, ans{};
    in >> A >> B >> K;
    size_t start = A + (K - (A % K));
    size_t B_mod_K = B % K;
    size_t stop = B - (B_mod_K == 0 ? K : B_mod_K);
    if(start < stop) {
        size_t n = (stop - start) / K + 1;
        ans = (n * (start + stop)) / 2;
    }
    out << ans;
    in.close();
    out.close();
}
