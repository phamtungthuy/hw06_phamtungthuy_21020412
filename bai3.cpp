#include <iostream>
using namespace std;

int solve(string s) {
    if(s.length() == 1) return stoi(s);
    return min(solve(s.substr(0, s.length() -1)), s[s.length() -1] - '0');
}

int main() {
    string s; cin >> s;
    cout << solve(s);
    return 0;
}
