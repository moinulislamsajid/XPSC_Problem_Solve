#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n==0)
    {
        cout<<0<<0<<0<<0<<endl;
    }


    int temp = n;

    int c=0;
    while(temp != 0)
    {
        temp = temp/10;
        c++;
    }

   if(c==4)
   {
       cout<<n<<endl;
   }
   else
   {
       if(c==3)
       {
           cout<<0<<n<<endl;
       }
       if(c==2)
       {
           cout<<0<<0<<n<<endl;
       }
       if(c==1)
       {
           cout<<0<<0<<0<<n<<endl;
       }
   }




}
