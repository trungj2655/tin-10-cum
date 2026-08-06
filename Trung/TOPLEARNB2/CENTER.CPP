#include <fstream>
#include <vector>
using namespace std;
int main() {
    size_t N, T, K;
    ifstream in("CENTER.INP");
    ofstream out("CENTER.OUT");
    in >> N >> T >> K;
    vector<size_t> A(N), inc(N), dec(N), ans;
    inc[0] = dec[0] = 0;
    for(size_t i{}; i < N; ++i) in >> A[i];
    for(size_t i = 1; i < N; ++i) {
        inc[i] = inc[i - 1] + static_cast<size_t>(A[i - 1] < A[i]);
        dec[i] = dec[i - 1] + static_cast<size_t>(A[i - 1] > A[i]);
    }
    for(size_t i = T; i < N - T; ++i) {
        if(!(inc[i] - inc[i-T] > K || dec[i+T] - dec[i] > K)) ans.push_back(i);
    }
    out << ans.size() << '\n';
    for(size_t i : ans) out << i + 1 << ' ';
    in.close();
    out.close();
}
