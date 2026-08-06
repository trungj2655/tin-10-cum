#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;
bool check(ll p, size_t n, vector<ll>& A, ll k) {
    vector<ll> D2(n, 0);
    vector<ll> diff_D2(n, 0);
    ll R = sqrt((long double)p), cur_diff_D2{}, cur_D1{}, cur_damage{}, k_used{};
    for(size_t j{}; j < n; ++j) {
        cur_diff_D2 += diff_D2[j];
        D2[j] += cur_diff_D2;
        cur_D1 += D2[j];
        cur_damage += cur_D1;
        ll rem = A[j] - cur_damage;
        if(rem > 0) {
            ll m = (rem + p - 1) / p;
            k_used += m;
            if(k_used > k) return false;
            ll d = m * p;
            D2[j] += d;
            cur_D1 += d;
            cur_damage += d;
            if(j + 1 < n) D2[j + 1] -= m * (p + 1);
            size_t L = j + 2, R_end = min(n - 1, j + (size_t)R);
            if(L <= R_end) {
                diff_D2[L] -= m * 2;
                if(R_end + 1 < n) diff_D2[R_end + 1] += m * 2;
            }
            if(j + R + 1 < n) D2[j + R + 1] += m * ((R + 1) * (R + 1) - 2 - p);
            if(j + R + 2 < n) D2[j + R + 2] += m * (p - R * R);
        }
    }
    return true;
}
int main() {
    size_t n;
    ll k, ans, maxx{};
    cin >> n >> k;
    vector<ll> A(n);
    for(size_t i{}; i < n; ++i) {
        cin >> A[i];
        maxx = max(maxx, A[i]);
    }
    ll low = 1, high = maxx + n * n;
    for(ll mid; low <= high;) {
        mid = (low + high) / 2;
        if(check(mid, n, A, k)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans;
}