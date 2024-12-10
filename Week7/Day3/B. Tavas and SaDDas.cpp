#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;

    int len = s.size();

    long long int res=0;

    for(int i=0; i<len; i++)
    {
        if(s[i]=='7')
        {
            res+=pow(2,(len-i-1));
        }
        else
        {
            res+=0;
        }
    }

    long long int sum=0;

    for(int i=0; i<len; i++)
    {
        sum+=pow(2,i);
    }

    cout<<sum+res<<endl;

}
