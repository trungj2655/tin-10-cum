#include <fstream>
#include <vector>
using namespace std;
int main() {
    size_t n;
    ifstream in("IVECTOR.INP");
    ofstream out("IVECTOR.OUT");
    in >> n;
    vector<size_t> a(n), A(n), b(n, 0), B(n);
    for(size_t i{}; i < n; ++i) {
        in >> a[i];
        A[a[i] - 1] = i;
    }
    for(size_t i{}; i < n; ++i) in >> B[i];
    for(size_t i{}; i < n; ++i) {
        size_t ans{};
        for(size_t j{}; j < A[i]; ++j) {
            if(a[j] > i + 1) ++ans;
        }
        out << ans << ' ';
    }
    for(size_t i{}; i < n; ++i) {
        for(size_t j{}, c{}; j < n; ++j) {
            if(b[j] == 0) {
                if(c == B[i]) {
                    b[j] = i + 1;
                    break;
                }
                ++c;
            }
        }
    }
    out << '\n';
    for(size_t i : b) {
        out << i << ' ';
    }
    in.close();
    out.close();
}
