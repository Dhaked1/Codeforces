#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int k,n;
   cin>>n>>k;
   int totaltime = 240;
   
   int remainingtime = totaltime - k;
   int solved = 0;
   int time = 0;
   for(int i = 1;i<= n; i++)
   {
       time += 5*i;
       if(time <= remainingtime)
       {
           solved++;
       }
       else
       {
           break;
       }
   }
   cout<<solved<<endl;
    return 0;
}
