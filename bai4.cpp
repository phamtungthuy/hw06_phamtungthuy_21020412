#include <iostream>

using namespace std;

string solve(string s) {
    if(s.length() <= 1) return s;
    return s[s.length() - 1] + solve(s.substr(1, s.length() - 2)) + s[0];
}
int main() {
    string s; cin >> s;
    cout << solve(s);
    return 0;
}
