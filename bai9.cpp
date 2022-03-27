#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

set<string> se;
int n;
void dq(string s) {
    if(s.length() > n) return;
    se.insert(s);
    dq("(" + s + ")");
    for(string x : se) {
        if(x == "") continue;
        dq(x + s);
        dq(s + x);
    }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin >> n;
    dq("");
    for(string s : se) {
        if(s.length() == n) cout << s << endl;
    }

    return 0;
}
