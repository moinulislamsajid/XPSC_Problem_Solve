#include<bits/stdc++.h>
using namespace std;

int timeCal(const string &str)
{
    int t=2;

    for(int i=1; i<str.length(); i++)
    {
        if(str[i] == str[i-1])
        {
            t+=1;
        }
        else
        {
            t+=2;
        }
    }

    return t;
}

void solve()
{
    string str;
    cin>>str;

    int maxt = -1;
    string bPass = "";

    for(int i=0; i<=str.length(); i++)
    {
        for(char ch='a'; ch<='z'; ch++)
        {
            string npass = str.substr(0,i) + ch + str.substr(i);
            int nT = timeCal(npass);

            if(nT>maxt)
            {
                maxt = nT;
                bPass = npass;
            }
        }
    }

    cout<<bPass<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
