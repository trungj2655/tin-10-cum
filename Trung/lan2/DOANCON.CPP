#include <fstream>
#include <set>
#include <vector>
using namespace std;
size_t lus(vector<size_t> &a, size_t n, size_t i)
{
    set<size_t> s;
    size_t j = i;
    for (; j < n && s.insert(a[j]).second; ++j)
        ;
    return j - i;
}
int main()
{
    ifstream in("DOANCON.INP");
    ofstream out("DOANCON.OUT");
    size_t N, max_i{}, max_len{};
    in >> N;
    vector<size_t> A(N);
    for (size_t i{}; i < N; ++i)
        in >> A[i];
    for (size_t i{}; i < N; ++i)
    {
        size_t len = lus(A, N, i);
        if (max_len < len)
        {
            max_i = i;
            max_len = len;
        }
    }
    out << max_i + 1 << '\n' << max_len;
    in.close();
    out.close();
}
