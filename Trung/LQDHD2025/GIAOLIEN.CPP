// Bài 4 @ assets/DE THI HSG 11 NAM 2024-2025 CAP TRUONG.docx
//#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
//void print(vector<size_t>& a) {
//    for(size_t i : a) cout << i << ' ';
//    cout << '\n';
//}
int main() {
    size_t n;
    ifstream in("GIAOLIEN.INP");
    ofstream out("GIAOLIEN.OUT");
    in >> n;
    vector<bool> visited(n), v(n);
    vector<size_t> path, dir;
    vector<vector<size_t>> edges(n, vector<size_t>());
    for(size_t a, b, i = 1; i < n; ++i) {
        in >> a >> b;
        edges[a - 1].push_back(b - 1);
        edges[b - 1].push_back(a - 1);
    }
//    for(vector<size_t>& i : edges) {
//        for(size_t j : i) {
//            cout << j << ' ';
//        }
//        cout << '\n';
//    }
    for(size_t cnt, ans, j, i{}; i < n; ++i) {
        j = 0, ans = 0, cnt = 1;
        fill(visited.begin(), visited.end(), false);
        fill(v.begin(), v.end(), false);
        v[i] = true, visited[i] = true;
        path.assign({i});
        dir.assign({0});
        while(true) {
            size_t sz = edges[path[j]].size();
            bool p = false, q = false;
            for(; (p = dir[j] < sz); ++dir[j]) {
                size_t c = edges[path[j]][dir[j]];
                if(!visited[c]) {
                    ++j;
                    if(!v[c]) {
                        v[c] = true;
                        ans += j;
                        if(q = ++cnt == n) break;
                    }
                    visited[c] = true;
                    path.push_back(c);
                    dir.push_back(0);
//                    print(path);
//                    print(dir);
                    break;
                }
            }
            if(q) break;
            if(!p) {
                if(j == 0) break;
                visited[path[j]] = false;
                path.pop_back();
                dir.pop_back();
                ++dir[--j];
            }
        }
        out << ans << '\n';
    }
    in.close();
    out.close();
}
