#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;
size_t sum_digits(size_t n) {
	size_t ans{};
	while(n) {
		ans += n % 10;
		n /= 10;
	}
	return ans;
}
int main() {
	size_t n, maxx{};
	ifstream in("NTDB.INP");
	ofstream out("NTDB.OUT");
	in >> n;
	vector<size_t> a(n);
	for(size_t i{}; i < n; ++i) {
		in >> a[i];
		if(maxx < a[i]) maxx = a[i];
	}
	vector<bool> prime(maxx + 1, true);
	prime[0] = false;
	prime[1] = false;
	for(size_t i = 2; i * i <= maxx; ++i) {
		if(prime[i]) {
			for(size_t j = i * i; j <= maxx; j += i) prime[j] = false;
		}
	}
	out << count_if(a.cbegin(), a.cend(), [&prime](size_t n){ return prime[n] && prime[sum_digits(n)]; });
	in.close();
	out.close();
}

