#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    if(a.length() < b.length()) return true;
    else if(a.length() > b.length()) return false;
    else {
        for(int i = 0; i < a.length(); i++) {
            if(a[i] > b[i]) return false;
        }
        return true;
    }
}
vector<string> ans;

void sinh(string s, int n) {
    if(s.length() > n) return;
    ans.push_back(s);
    sinh(s + "0", n);
    sinh(s + "1", n);
}



int main() {
    int n; cin >> n;
    sinh("", n);
    sort(ans.begin(), ans.end(), cmp);
    for(string s : ans) {
        cout << s << endl;
    }
    return 0;
}
