#include <fstream>
#include <vector>
using namespace std;
bool ngang(vector<vector<bool>> &board, bool quan)
{
    for (size_t i{}; i < 6; ++i)
    {
        for (size_t j{}; j < 4; ++j)
        {
            if (board[i][j] == quan && board[i][j + 1] == quan && board[i][j + 2] == quan && board[i][j + 3] == quan)
                return true;
        }
    }
    return false;
}
bool doc(vector<vector<bool>> &board, bool quan)
{
    for (size_t i{}; i < 3; ++i)
    {
        for (size_t j{}; j < 7; ++j)
        {
            if (board[i][j] == quan && board[i + 1][j] == quan && board[i + 2][j] == quan && board[i + 3][j] == quan)
                return true;
        }
    }
    return false;
}
int main()
{
    ifstream in("CARO3D.INP");
    ofstream out("CARO3D.OUT");
    vector<vector<bool>> board(6, vector<bool>(7, false));
    for (size_t x, i{}; i < 6; ++i)
    {
        for (size_t j{}; j < 7; ++j)
        {
            in >> x;
            board[i][j] = (x == 1);
        }
    }
    bool red = ngang(board, true) || doc(board, true);
    bool yellow = ngang(board, false) || doc(board, false);
    if (red == yellow)
    {
        out << -1;
    }
    else
    {
        out << (red ? '1' : '0');
    }
    in.close();
    out.close();
}
