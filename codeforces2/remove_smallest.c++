#include <iostream>
#include <vector>
#include <algorithm>
 

using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    sort(arr.begin(), arr.end());
 
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] > 1) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
return 0;
}
