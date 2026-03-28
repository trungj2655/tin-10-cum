#include <fstream>
#include <string>
#include <array>
using namespace std;
int main() {
    size_t n{}, maxx{}, dem{};
    array<bool, 26> a;
    a.fill(false);
    string S;
    ifstream in("STR.INP");
    ofstream out("STR.OUT");
    in >> S;
    in.close();
    for(char c : S) {
        if(isdigit(c)) {
            n = 10 * n + (c - '0');
        } else {
            bool& x = a[c - 'a'];
            if(!x) {
                x = true;
                ++dem;
            }
            if(n > maxx) maxx = n;
            n = 0;
        }
    }
    if(n > maxx) maxx = n;
    out << dem << '\n' << maxx;
    out.close();
}
