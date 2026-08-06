#include <fstream>
#include <array>
using namespace std;
constexpr array<int, 4> pass{{2, 0, 2, 5}};
int mod(int a) {
    int res = a % 10;
    if(res < 0) res += 10;
    return res;
}
int main() {
    int x, ans{};
    ifstream in("KHOASO.INP");
    ofstream out("KHOASO.OUT");
    for(size_t i{}; i < 4; ++i) {
        in >> x;
        ans += min(mod(x - pass[i]), mod(pass[i] - x));
    }
    out << ans;
    in.close();
    out.close();
}
