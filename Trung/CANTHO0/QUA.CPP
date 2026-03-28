#include <fstream>
#include <string>
using namespace std;
size_t reward(string& a, string& b) {
    bool A = true, B = false;
    size_t x = min(a.size(), b.size());
    for(size_t i{}; i < x; ++i) {
        if(a[i] != b[i]) {
            if(A) {
                A = false;
                B = i == 0;
            } else {
                return 0;
            }
        }
    }
    return A ? 2000 : (B ? 50 : 6);
}
int main() {
    string S, T;
    ifstream in("QUA.INP");
    ofstream out("QUA.OUT");
    in >> S >> T;
    out << reward(S, T);
    in.close();
    out.close();
}
