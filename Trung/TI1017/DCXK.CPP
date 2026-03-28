#include <fstream>
using namespace std;
int main() {
	long long x;
	size_t N, c{1}, maxx{};
	ifstream in("DCXK.INP");
	ofstream out("DCXK.OUT");
	in >> N >> x;
	bool p, positive = x > 0;
	while(--N) {
		in >> x;
		if(positive == (p = x > 0)) {
			if(maxx < c) maxx = c;
			c = 1;
		} else {
			++c;
			positive = p;
		}
	}
	if(maxx < c) maxx = c;
	out << maxx;
	in.close();
	out.close();
}

