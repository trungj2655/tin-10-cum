#include <fstream>
#include <vector>
using namespace std;
int main() {
	size_t N, K, B;
	ifstream in("DAYLAP.INP");
	ofstream out("DAYLAP.OUT");
	in >> N >> K >> B;
	size_t idx = (B - 1) % N;
	vector<size_t> sum(N + 1);
	sum[0] = 0;
	for(size_t x, s{}, i{1}; i <= N; ++i) {
		in >> x;
		sum[i] = s += x;
	}
	if(idx + K <= N) {
		out << sum[idx + K] - sum[idx];
	} else {
		K -= N - idx;
		out << sum[N] - sum[idx] + (K / N) * sum[N] + sum[K % N];
	}
	in.close();
	out.close();
}

