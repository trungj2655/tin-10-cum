#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    for(auto it = s.crbegin(); it != s.crend(); ++it) cout << *it;
}
