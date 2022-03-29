#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int dem(string s) {
    if(s == "") return 0;
    char c = s[s.length() - 1];
    if(c == '1') return 1 + dem(s.substr(0, s.length()-1));
    return dem(s.substr(0, s.length()-1));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s; cin >> s;
    cout << dem(s);
    return 0;
}
