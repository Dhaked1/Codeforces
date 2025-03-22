#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string result;
    for(int i =0;i<s.size();i++)
    {
        if(s[i] == '.')
        {
            result += '0';
        }
        if(s[i]== '-' && i+1 <s.size())
        {
            if(s[i+1] == '.')
            {
                result += '1';
            }
            else
            {
                result += '2';
            }
            i++;
        }
        
    }
    cout<<result<<endl;
    return 0;
}