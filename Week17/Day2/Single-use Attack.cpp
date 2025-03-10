#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int h,x,y;
        cin>>h>>x>>y;

        int cnt=1;

        int ans = h-y;

         if(ans==0)
         {
             cout<<1<<endl;
             continue;
         }
        int sum=0;
         while(true)
         {
             cnt++;
              sum +=x;

             if(sum>=ans)
             {
                 break;
             }
         }

         cout<<cnt<<endl;
    }
}
