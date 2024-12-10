#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s>>s1;

    int c=0,c1=0,c2=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
        {
            c++;
        }
        if(s1[i]=='+')
        {
            c1++;
        }
        if(s1[i]=='?')
        {
            c2++;
        }
    }

    int val=0;
    int t = pow(2,c2);

    for(int i=0; i<t; i++)
    {
        int tv = __builtin_popcount(i);
        if(tv+c1==c)
        {
            val++;
        }
    }

    double pro = (double) val/t;
    cout<<fixed<<setprecision(9)<<pro<<endl;
}
