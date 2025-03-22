#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a<b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
    cout<<" ";
    int n = abs(a-b);
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
        count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
