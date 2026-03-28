#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    size_t m, n, maxx{}, max_v{};
    ifstream in("bai4.inp");
    ofstream out("bai4.out");
    in >> m >> n;
    vector<vector<size_t>> A(m, vector<size_t>(n));
    vector<size_t> max_i;
    for(size_t i{}; i < m; ++i) {
        for(size_t j{}; j < n; ++j) {
            in >> A[i][j];
            maxx = max(maxx, A[i][j]);
        }
    }
    in.close();
    vector<bool> prime(maxx + 1, true);
    prime[0] = false;
    prime[1] = false;
    for(size_t i = 2; i * i <= maxx; ++i) {
        if(prime[i]) {
            for(size_t j = i * i; j <= maxx; j += i) {
                prime[j] = false;
            }
        }
    }
    for(size_t i{}; i < m; ++i) {
        size_t c = count_if(A[i].cbegin(), A[i].cend(), [&](size_t n){ return prime[n]; });
        if(c == 0) continue;
        if(max_v < c) {
            max_v = c;
            max_i.assign(1, i);
        } else if(max_v == c) {
            max_i.push_back(i);
        }
    }
    if(max_v == 0) {
        out << "khong";
    } else {
        for(size_t i : max_i) out << i + 1 << '\n';
    }
    out.close();
}
