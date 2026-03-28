#include <fstream>
#include <string>
using namespace std;
int main() {
    size_t n, a{}, b{};
    string s;
    ifstream in("COVUA.INP");
    ofstream out("COVUA.OUT");
    in >> n >> s;
    in.close();
    for(char c : s) c == 'A' ? ++a : ++b;
    out << (a > b ? '>' : (a == b ? '=' : '<'));
    out.close();
}
