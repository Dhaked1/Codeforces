#include<iostream>
using namespace std;
int main()
{
    int n,h,width = 0;
    cin>>n>>h;
    for(int i =0;i<n;i++)
    {
        int height;
        cin>>height;
        if(height>h)
        {
            width +=2;
        }
        else{
            width += 1;
        }
    }
    cout<<width<<endl;
    return 0;
}