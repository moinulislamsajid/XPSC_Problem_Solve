#include<bits/stdc++.h>
using namespace std;

void bin_dec(int n)
{
    vector<int> v;

    while(n>0)
    {
        int l = n%2;
        v.push_back(l);
        n/=2;
    }

    reverse(v.begin(),v.end());

    int sum=0;

    for(int in : v)
    {
        if(in==1)
        {
            sum+=in;
        }
    }

    if(sum%2==1)
    {
        cout<<"ODD"<<endl;
    }
    else
    {
        cout<<"EVEN"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        bin_dec(n);
    }
}
