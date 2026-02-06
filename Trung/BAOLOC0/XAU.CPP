#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream in("XAU.INP");
    ofstream out("XAU.OUT");
    size_t K;
    string s;
    in >> s >> K;
    size_t N = s.size(), min_i{};
    for(size_t i = N - K - 1; i <= N; ++i) {
        char minn = 127;
        for(size_t j = min_i; j < i; ++j) {
            if(s[j] < minn) {
                minn = s[j];
                min_i = j + 1;
            }
        }
        out << minn;
    }
    in.close();
    out.close();
}
