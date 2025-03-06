#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        string p = "i";  
        cin >> s;
        string temp = s.substr(0, s.size() - 2);  
        string res = temp + p;  
        cout << res << endl;
    }

    return 0;
}
