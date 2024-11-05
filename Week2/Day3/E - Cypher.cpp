#include<bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin>>t;

   while(t--)
   {
       int n;
       cin>>n;

       vector<int>v(n);

       for(int i=0; i<n; i++)
       {
           cin>>v[i];
       }

       vector<int>v1(n);
       for(int i=0; i<n; i++)
       {
           int n;
           cin>>n;
           string s;
           cin>>s;

           int currValue = v[i];

           for(char ch: s)
           {
               if(ch=='U')
               {
                   currValue = (currValue - 1+10)%10;
               }
               else if(ch=='D')
               {
                   currValue = (currValue + 1)%10;
               }
           }

           v1[i] = currValue;
       }

       for(int v : v1)
       {
           cout<<v<<" ";
       }
       cout<<endl;
   }


}
