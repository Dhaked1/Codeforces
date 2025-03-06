#include <iostream>
using namespace std;
 
int main() {
    
int n;
cin>>n;
int a[n];
int res[n];
for(int i = 0; i<n;i++)
{
    cin>>a[i];
    
    res[a[i] - 1] = i+1;
}
 
for(int i = 0; i<n; i++)
{
   cout<<res[i];
   cout<<" ";
}
    return 0;
}