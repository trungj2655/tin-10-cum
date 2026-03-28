#include <array>
#include <fstream>
using namespace std;
const array<size_t, 12> ngay = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
size_t dem_nam_nhuan(size_t m, size_t y)
{
    if (m <= 2)
        --y;
    return y / 4 - y / 100 + y / 400;
}
size_t dem_so_ngay(size_t d, size_t m, size_t y)
{
    size_t res = 365 * y + d + dem_nam_nhuan(m, y);
    for (size_t i{}; i < m - 1; ++i)
        res += ngay[i];
    return res;
}
int main()
{
    ifstream in("SONGAY.INP");
    ofstream out("SONGAY.OUT");
    size_t d1, m1, y1, d2, m2, y2;
    in >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    out << dem_so_ngay(d2, m2, y2) - dem_so_ngay(d1, m1, y1);
    in.close();
    out.close();
}
