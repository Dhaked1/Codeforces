#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
long long answer = 0;
    int max_value = *max_element(arr.begin(), arr.end()); 
    for(int i = 0; i < n; i++) {
        answer += max_value - arr[i];
    }
 
    cout << answer << endl;
    return 0;
}