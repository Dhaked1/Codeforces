#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int d = 0,l=0;
        string s;
        cin>>s;
        d = (s[0] - '0')+(s[1] - '0')+(s[2] - '0');
        l = (s[3]-'0')+(s[4]-'0')+(s[5]-'0');
        if(d == l)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}