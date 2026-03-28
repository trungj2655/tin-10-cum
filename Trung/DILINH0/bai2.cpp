#include <fstream>
#include <string>
#include <array>
using namespace std;
int main() {
    string s;
    bool khong = true;
    array<size_t, 10> a;
    a.fill(0);
    ifstream in("bai2.inp");
    ofstream out("bai2.out");
    getline(in, s);
    in.close();
    for(char c : s) {
        if(isdigit(c)) {
            if(khong) khong = false;
            ++a[c - '0'];
        }
    }
    if(khong) {
        out << "khong";
    } else {
        auto end = a.rend();
        char c = '9';
        for(auto it = a.rbegin(); it != end; ++it, --c) {
            while(*it != 0) {
                out << c;
                --*it;
            }
        }
    }
    out.close();
}
