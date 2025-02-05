#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length() > 10)  // Corrected here
        {
            cout<<s[0]+to_string(s.size()-2)+s[s.size()-1]<<"\n";
        }
        else
        {
            cout<<s<<"\n";
        }
        
    }
    return 0;
}