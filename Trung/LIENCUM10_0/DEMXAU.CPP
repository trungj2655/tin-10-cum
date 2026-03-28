#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    size_t ans{};
    string X, Y;
    ifstream in("DEMXAU.INP");
    ofstream out("DEMXAU.OUT");
    in >> X >> Y;
    auto end = Y.cend() - (X.size() - 1);
    for(auto it = Y.cbegin(); it != end; ++it) {
        if( equal(X.cbegin(), X.cend(), it) ) ++ans;
    }
    out << ans;
    in.close();
    out.close();
}
