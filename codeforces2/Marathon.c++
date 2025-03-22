#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b && a<c && a<d)
        {
            cout<<3<<endl;
        }
        else if(a<b && a<c && a>d || a<b && a>c && a<d || a>b && a<c && a<d)
        {
            cout<<2<<endl;
        }
        else if(a<b && a>c && a>d || a>b && a<c && a>d || a>b && a>c && a<d){
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}