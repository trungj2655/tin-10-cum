#include <fstream>
#include <vector>
#include <limits>
typedef long long ll;
using namespace std;
int main() {
    size_t n;
    ll sum{}, ans = numeric_limits<ll>::min();
    ifstream in("MXEXP.INP");
    ofstream out("MXEXP.OUT");
    in >> n;
    vector<ll> a(n);
    for(size_t i{}; i < n; ++i) {
        in >> a[i];
        sum += a[i];
    }
    for(size_t i{}; i < n - 2; ++i) {
        ans = max(ans, a[i]*a[i+1]*a[i+2] - (a[i]+a[i+1]+a[i+2]));
    }
    for(size_t i{}; i < n - 3; ++i) {
        for(size_t j = i + 2; j < n - 1; ++j) {
            ans = max(ans, a[i]*a[i+1] + a[j]*a[j+1] - (a[i]+a[i+1]) - (a[j]+a[j+1]));
        }
    }
    out << sum + ans;
    in.close();
    out.close();
}
