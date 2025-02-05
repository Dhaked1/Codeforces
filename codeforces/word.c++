#include <bits/stdc++.h>

using namespace std;
#define ll long long
 
int main()
{
    string word;
    int lower = 0;
    int upper = 0;
    cin>>word;
    for(char c : word )
    {
        if(islower(c))
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if(lower>=upper)
    {
 
        for(char &c : word)
        {
            c = tolower(c);
        }
    }
    else {
        for(char &c : word)
        {
            c = toupper(c);
        }
 
    }
    cout<<word;
    return 0;
}
