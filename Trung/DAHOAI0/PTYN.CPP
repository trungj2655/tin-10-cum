#include <fstream>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{
    ifstream in("PTYN.INP");
    ofstream out("PTYN.OUT");
    size_t m, n;
    in >> m >> n;
    vector<vector<ll>> A(m, vector<ll>(n));
    vector<ll> minn(m);
    vector<ll> maxx(n);
    for (size_t i{}; i < m; ++i)
    {
        ll min_v = 10e18;
        for (size_t j{}; j < n; ++j)
        {
            in >> A[i][j];
            if (A[i][j] < min_v)
                min_v = A[i][j];
        }
        minn[i] = min_v;
    }
    for (size_t i{}; i < n; ++i)
    {
        ll max_v = -10e18;
        for (size_t j{}; j < m; ++j)
        {
            if (A[j][i] > max_v)
                max_v = A[j][i];
        }
        maxx[i] = max_v;
    }
    bool khong_co = true;
    for (size_t i{}; i < m; ++i)
    {
        for (size_t j{}; j < n; ++j)
        {
            if (A[i][j] == minn[i] && A[i][j] == maxx[j])
            {
                if (khong_co)
                    khong_co = false;
                out << '(' << i + 1 << ',' << j + 1 << ")\n";
            }
        }
    }
    if (khong_co)
        out << "khong co";
    in.close();
    out.close();
}
