#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
bool ahh(size_t n) {
    size_t odd{}, even{};
    while(n != 0) {
        if((n % 10) & 1) {
            ++odd;
        } else {
            ++even;
        }
        n /= 10;
    }
    return odd != even;
}
int main() {
    size_t n, maxx{};
    ifstream in("SODEP.INP");
    ofstream out("SODEP.OUT");
    in >> n;
    vector<size_t> a;
    a.reserve(n/2);
    for(size_t x, i{}; i < n; ++i) {
        in >> x;
        if(ahh(x)) {
            if(maxx < x) maxx = x;
            a.push_back(x);
        }
    }
    vector<bool> prime(maxx + 1, true);
    prime[0] = false;
    prime[1] = false;
    for(size_t i = 2; i * i <= maxx; ++i) {
        if(prime[i]) {
            for(size_t j = i * i; j <= maxx; j += i) {
                prime[j] = false;
            }
        }
    }
    out << count_if(a.cbegin(), a.cend(), [&](size_t n){ return prime[n]; });
    in.close();
    out.close();
}
