#include <algorithm>
#include <array>
#include <fstream>
using namespace std;
int main() {
    size_t X, Y;
    array<size_t, 4> ans;
    ifstream in("DAPAN.INP");
    ofstream out("DAPAN.OUT");
    in >> X >> Y;
    for(size_t i{}; i < 4; ++i) in >> ans[i];
    out << static_cast<char>( distance( ans.cbegin(), find(ans.cbegin(), ans.cend(), X + Y) ) + 'A' );
    in.close();
    out.close();
}
