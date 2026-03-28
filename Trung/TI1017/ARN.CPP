#include <algorithm>
#include <fstream>
#include <string>
using namespace std;
int main() {
	size_t ans{};
	string S, X;
	ifstream in("ARN.INP");
	ofstream out("ARN.OUT");
	in >> S >> X;
	auto end = S.cend() - (X.size() - 1);
	auto it = S.cbegin();
	while(it < end) {
		if( equal(X.cbegin(), X.cend(), it) ) {
			++ans;
			it += X.size();
		} else {
			++it;
		}
	}
	out << ans;
	in.close();
	out.close();
}

