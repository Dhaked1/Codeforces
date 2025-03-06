#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> l;  
    int p, q;
    cin >> p;  
    
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;  
        l.insert(level);
    }
    
    cin >> q;  
    
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;  
        l.insert(level);
    }
    
    if (l.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    
    return 0;
}
