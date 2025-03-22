#include <bits/stdc++.h>
using namespace std;
int main() {
 
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    
    int diff = abs(a-b);
    cout<<(diff/10)+(diff%10 != 0)<<endl;
}
 
    return 0;
}
