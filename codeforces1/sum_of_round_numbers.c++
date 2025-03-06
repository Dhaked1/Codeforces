#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> result;
        int place = 1;
        
        while(n > 0) {
            int digit = n % 10;
            if(digit != 0) {
                result.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }
        reverse(result.begin(), result.end());

        cout << result.size() << endl;
        for(auto num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
