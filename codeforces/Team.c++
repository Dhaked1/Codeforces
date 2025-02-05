#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int sol = 0;
    int n;
    cin >> n;
    
    while(n--) {
        int arr[3];
        int count = 0; 
        for(int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < 3; i++) {
            if(arr[i] == 1) {
                count++;
            }
        }
 
    
        if(count >= 2) {
            sol++;
        }
    }
 
    cout << sol;
}