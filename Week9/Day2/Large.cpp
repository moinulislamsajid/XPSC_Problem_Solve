#include<bits/stdc++.h>
using namespace std;

const int N = 1e9+7;

int main()
{

   int t;
   cin>>t;

   while(t--)
   {
       int n,res=1;
       cin>>n;

       for(int i=1; i<=n; i++)
       {
            res = (1LL * res % N * i % N) % N;
       }

       cout<<res<<endl;
   }
}
