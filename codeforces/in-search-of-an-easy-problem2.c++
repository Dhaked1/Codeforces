#include <iostream>
#include<string>
using namespace std;
int main() {
    int t,n;
    int h = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n == 1)
        {
            h++;
        }
    }
    if(h >0)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
    return 0;
}