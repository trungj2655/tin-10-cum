#include <bits/stdc++.h>
using namespace std;
int main() {
	size_t N, M;
	ifstream in("TCB.INP");
	ofstream out("TCB.OUT");
	in >> N >> M;
	out << __gcd(N, M);
	in.close();
	out.close();
}

