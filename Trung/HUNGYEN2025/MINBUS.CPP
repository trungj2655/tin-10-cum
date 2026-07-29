//#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    size_t n, m;
    ifstream in("MINBUS.INP");
    ofstream out("MINBUS.OUT");
    in >> n;
    vector<size_t> ans(n, 0);
    vector<bool> visited(n, false);
    vector<vector<size_t>> son(n, vector<size_t>());
    for(size_t a, b, i = 1; i < n; ++i) {
        in >> a >> b;
        son[a - 1].push_back(b);
        son[b - 1].push_back(a);
    }
//    for(vector<size_t>& i : son) {
//        for(size_t j : i) {
//            cout << j << ' ';
//        }
//        cout << '\n';
//    }
    in >> m;
    for(size_t a, b, i{}; i < m; ++i) {
        in >> a >> b;
        vector<size_t> path{{a}}, dir{{0}};
        visited.assign(n, false);
        visited[a - 1] = true;
        for(size_t j{}; path[j] != b;) {
            size_t sz = son[path[j] - 1].size();
            bool p{};
            for(; (p = dir[j] < sz); ++dir[j]) {
                size_t c = son[path[j] - 1][dir[j]] - 1;
                if(!visited[c]) {
                    visited[c] = true;
                    path.push_back(c + 1);
                    dir.push_back(0);
                    ++j;
                    break;
                }
            }
            if(!p) {
                if(j == 0) break;
                visited[path[j] - 1] = false;
                path.pop_back();
                dir.pop_back();
                ++dir[--j];
            }
        }
        for(size_t j : path) {
            if(ans[j - 1] == 0) ans[j - 1] = i + 1;
        }
    }
    for(size_t i : ans) {
        if(i == 0) {
            out << -1;
        } else {
            out << i;
        }
        out << '\n';
    }
    in.close();
    out.close();
}
