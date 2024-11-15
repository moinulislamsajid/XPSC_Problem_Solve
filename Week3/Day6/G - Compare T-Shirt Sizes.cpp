#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        string s,ss;
        cin>>s>>ss;

        int sZ = s.size()-1;
        int ssZ = ss.size()-1;

        if(s[sZ]=='S' && ss[ssZ]=='S')
        {
            if(sZ>ssZ)
            {
                cout<<'<'<<endl;
            }
            else if(sZ<ssZ)
            {
                cout<<'>'<<endl;
            }
            else if(sZ==ssZ)
            {
                cout<<'='<<endl;
            }
        }
        else if(s[sZ]=='L' && ss[ssZ]=='L')
        {
            if(sZ>ssZ)
            {
                cout<<'>'<<endl;
            }
            else if(sZ<ssZ)
            {
                cout<<'<'<<endl;
            }
            else if(sZ==ssZ)
            {
                cout<<'='<<endl;
            }
        }
        else if(s[sZ]=='S')
        {
            if(ss[ssZ]=='S')
            {
                cout<<'='<<endl;
            }
            else if(ss[ssZ]=='M')
            {
                cout<<'<'<<endl;
            }
            else if(ss[ssZ]=='L')
            {
                cout<<'<'<<endl;
            }
        }
        else if(s[sZ]=='M')
        {
            if(ss[ssZ]=='M')
            {
                cout<<'='<<endl;
            }
            else if(ss[ssZ]=='S')
            {
                cout<<'>'<<endl;
            }
            else if(ss[ssZ]=='L')
            {
                cout<<'<'<<endl;
            }
        }
        else if(s[sZ]=='L')
        {
            if(ss[ssZ]=='L')
            {
                cout<<'='<<endl;
            }
            else if(ss[ssZ]=='M')
            {
                cout<<'>'<<endl;
            }
            else if(ss[ssZ]=='S')
            {
                cout<<'>'<<endl;
            }
        }


    }
}
