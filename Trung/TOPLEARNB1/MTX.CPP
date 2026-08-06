#include <fstream>
#include <vector>
#include <string>
#include <utility>
using namespace std;
typedef long long ll;
int main() {
    size_t T, q;
    string inp;
    ifstream in("MTX.INP");
    ofstream out("MTX.OUT");
    in >> T;
    vector<ll> m(9), sum(6);
    for(size_t i{}; i < T; ++i) {
        bool distinct = false, equal_sum = true;
        auto f = make_pair(0ll, true);
        auto S = make_pair(0ll, true);
        for(size_t j{}; j < 9; ++j) {
            in >> inp;
            if(inp == "?") {
                q = j;
                m[j] = 0;
            } else {
                m[j] = stoll(inp);
                if(f.second) {
                    f.first = m[j];
                    f.second = false;
                } else if(!(distinct || f.first == m[j])) {
                    distinct = true;
                }
            }
        }
        if(!distinct) {
            out << "IMPOSSIBLE\n";
            continue;
        }
        size_t q_x = q / 3, q_y = q % 3;
        for(size_t j{}; j < 3; ++j) {
            ll s{};
            for(size_t k{}; k < 3; ++k) s += m[j * 3 + k];
            sum[j] = s;
            if(q_x != j) {
                if(S.second) S.first = s;
                else if(S.first != s) {
                    equal_sum = false;
                    break;
                }
            }
        }
        if(!equal_sum) {
            out << "IMPOSSIBLE\n";
            continue;
        }
        for(size_t j{}; j < 3; ++j) {
            ll s{};
            for(size_t k{}; k < 3; ++k) s += m[j + k * 3];
            sum[j + 3] = s;
            if(q_y != j) {
                if(S.second) S.first = s;
                else if(S.first != s) {
                    equal_sum = false;
                    break;
                }
            }
        }
        ll c = S.first - sum[q_x];
        if(equal_sum && c == S.first - sum[q_y + 3]) out << c << '\n';
        else out << "IMPOSSIBLE\n";
    }
    in.close();
    out.close();
}
