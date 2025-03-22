#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int arr[] = {a,b,c};
        sort(arr,arr+3);
        if(arr[0] != arr[1])
        {
         cout<<arr[0]<<endl;   
        }
        else
        {
            cout<<arr[2]<<endl;
        }
    }
 
    return 0;
}