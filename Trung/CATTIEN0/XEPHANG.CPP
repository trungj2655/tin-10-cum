#include <fstream>
#include <unordered_map>
using namespace std;
int main() {
    ifstream in("XEPHANG.INP");
    ofstream out("XEPHANG.OUT");
    unordered_map<size_t, size_t> heights;
    size_t n, max_k, max_v = 1;
    in >> n >> max_k;
    ++heights[max_k];
    for(size_t i{}; --n && in >> i;) {
        ++heights[i];
        if(i == max_k) {
            ++max_v;
        } else if(max_v < heights[i]) {
            max_k = i;
            max_v = heights[i];
        }
    }
    out << max_v << ' ' << max_k;
    in.close();
    out.close();
}