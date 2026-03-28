#include <algorithm>
#include <fstream>
#include <utility>
#include <vector>
using namespace std;
bool cmp(const pair<size_t, size_t>& a, const pair<size_t, size_t>& b) {
    return a.second < b.second || (a.second == b.second && a.first < b.first);
}
int main() {
    size_t N, M, ans{}, sum{};
    ifstream in("TCAY.INP");
    ofstream out("TCAY.OUT");
    in >> N >> M;
    vector<pair<size_t, size_t>> A(N, pair<size_t, size_t>{0, 0});
    for(size_t i{}; i < N; ++i) in >> A[i].first;
    for(size_t i{}; i < N; ++i) in >> A[i].second;
    sort(A.begin(), A.end(), cmp);
    for(; ans < N; ++ans) {
        sum += A[ans].first;
        if(sum > M) break;
    }
    out << ans;
    in.close();
    out.close();
}
