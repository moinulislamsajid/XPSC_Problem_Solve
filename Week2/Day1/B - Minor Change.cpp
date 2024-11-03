#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    long long int c=0;


    for(long long int i=0; i<t.length(); i++)
        {

             if(s[i]!=t[i])
             {
                 c++;
             }
        }



    cout<<c<<endl;
}
