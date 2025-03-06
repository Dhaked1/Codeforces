#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int t = -1, s = 1001; 
    int tidx = 0, sidx = 0;
    

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > t) {
            t = arr[i];
            tidx = i;
        }
        if (arr[i] <= s) {
            s = arr[i];
            sidx = i;
        }
    }


    int swaps = tidx + (n - 1 - sidx);

    
    if (tidx > sidx) {
        swaps--;
    }

    cout << swaps << endl;
    return 0;
}
