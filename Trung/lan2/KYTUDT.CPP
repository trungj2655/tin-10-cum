#include <array>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream in("KYTUDT.INP");
    ofstream out("KYTUDT.OUT");
    size_t n;
    string s;
    in >> n >> s;
    size_t N = s.size();
    array<size_t, 26> pos;
    array<size_t, 26> count;
    pos.fill(0);
    count.fill(0);
    for (size_t i{}; i < N; ++i)
    {
        size_t x = s[i] - 'a';
        if (pos[x] == 0)
            pos[x] = i + 1;
        if (++count[x] == n)
        {
            out << pos[x];
            return 0;
        }
    }
    out << -1;
    in.close();
    out.close();
}
