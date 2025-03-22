#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int sum = 0;
       int r1 = n%10;
       n = n/10;
       sum = r1+n;
       cout<<sum<<endl;
    }
 
    return 0;
}
