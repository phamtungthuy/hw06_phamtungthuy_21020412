#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

set<string> ans;

void sinh(string s, int n) {
    if(s.length() > n) return;
    ans.insert(s);
    for(string tmp : ans) {
        sinh(tmp + s, n);
        sinh("1" + tmp + s, n);
        sinh(tmp + "1" + s, n);
        sinh(tmp + s + "1", n);
    }
}

int main() {
    ans.insert("0");
    int n; cin >> n;
    sinh("0", n);
    for(string s : ans) {
        cout << s << endl;
    }
    return 0;
}
