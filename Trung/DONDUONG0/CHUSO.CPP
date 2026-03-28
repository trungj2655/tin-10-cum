#include <algorithm>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string s;
    ifstream in("CHUSO.INP");
    ofstream out("CHUSO.OUT");
    in >> s;
    in.close();
    out << *max_element(s.cbegin(), s.cend());
    out.close();
}
