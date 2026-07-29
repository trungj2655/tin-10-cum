#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <tuple>
using namespace std;
class DSU {
    vector<size_t> parent, rank;
public:
    void init() {
        iota(parent.begin(), parent.end(), 0);
        fill(rank.begin(), rank.end(), 0);
    }
    DSU(size_t n) {
        parent.resize(n);
        rank.resize(n);
    }
    size_t find(size_t i) {
        return parent[i] == i ? i : parent[i] = find(parent[i]);
    }
    bool unite(size_t x, size_t y) {
        size_t a = find(x), b = find(y);
        bool no_cycle = a != b;
        if(no_cycle) {
            if(rank[a] < rank[b]) swap(a, b);
            parent[b] = a;
            if(rank[a] == rank[b]) ++rank[a];
        }
        return no_cycle;
    }
};
bool mst(size_t v, vector<tuple<size_t, size_t, bool>>& edges, DSU& dsu) {
    dsu.init();
    size_t c{};
    for(auto& [x, y, w] : edges) {
        if(dsu.unite(x, y)) {
            if(!w) return false;
            if(++c == v - 1) break;
        }
    }
    return true;
}
int main() {
    size_t n, m, q;
    cin >> n >> m;
    DSU dsu(n);
    vector<tuple<size_t, size_t, bool>> edges(m);
    for(size_t a, b, i{}; i < m; ++i) {
        cin >> a >> b;
        edges[i] = tuple<size_t, size_t, bool>(a - 1, b - 1, true);
    }
    cin >> q;
    for(size_t a, b, i{}; i < q; ++i) {
        cin >> a >> b;
        --a;
        --b;
        size_t j{}, k{};
        for(; j < a; ++j) get<2>(edges[j]) = false;
        for(; j <= b; ++j) get<2>(edges[j]) = true;
        for(; j < m; ++j) get<2>(edges[j]) = false;
        vector<tuple<size_t, size_t, bool>> e(edges);
        for(j = b + 1; !get<2>(e[k]) && j > a; --j, ++k) swap(e[k], e[j - 1]);
//        for(auto& [x, y, w] : e) {
//            cout << x << ' ' << y << ' ' << (size_t)w << '\n';
//        }
        cout << (mst(n, e, dsu) ? "Yes" : "No") << '\n';
    }
}