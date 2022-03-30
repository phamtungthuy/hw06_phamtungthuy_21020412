#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int dem(string s) {
    if(s == "") return 0;
    return s[s.length() - 1] - '0' + dem(s.substr(0, s.length()-1)) ;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s; cin >> s;
    cout << dem(s);
    return 0;
}
