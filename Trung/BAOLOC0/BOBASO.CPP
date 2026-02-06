#include <fstream>
#include <vector>
using namespace std;
int main() {
    ifstream in("BOBASO.INP");
    ofstream out("BOBASO.OUT");
    int maxx = -2*10e9;
    size_t N;
    in >> N;
    vector<int> A(N);
    for(size_t i{}; i < N; ++i) {
        in >> A[i];
    }
    for(size_t i{}; i < N - 2; ++i) {
        for(size_t j = i + 1; j < N - 1; ++j) {
            for(size_t k = j + 1; k < N; ++k) {
                int S = 2*A[i]-3*A[j]+5*A[k];
                if(maxx < S) maxx = S;
            }
        }
    }
    out << maxx;
    in.close();
    out.close();
}
