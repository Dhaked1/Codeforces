#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    vector<int> valid_number;
    for (int i = 0; valid_number.size() < 1000; i++) {
        if (i % 3 != 0 && i % 10 != 3) {
            valid_number.push_back(i);
        }
    }
    while (t--) {
        int k;
        cin >> k;
        
        cout << valid_number[k - 1] << endl;
    }
 
    return 0;
}
