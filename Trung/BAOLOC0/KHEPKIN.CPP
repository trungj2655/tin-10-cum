#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream in("KHEPKIN.INP");
    ofstream out("KHEPKIN.OUT");
    size_t ans{};
    string s;
    in >> s;
    for(char c : s) {
        if(c == '8') {
            ans += 2;
        } else if(c == '0' || c == '4' || c == '6' || c == '9') {
            ++ans;
        }
    }
    out << ans;
    in.close();
    out.close();
}
