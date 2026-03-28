#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream in("DEMCHUSO.INP");
    ofstream out("DEMCHUSO.OUT");
    size_t res{};
    string s;
    getline(in, s);
    for (char c : s)
    {
        if (c >= '0' && c <= '9')
            ++res;
    }
    out << res;
    in.close();
    out.close();
}
