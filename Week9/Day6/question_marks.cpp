#include<bits/stdc++.h>
using namespace std;

void solve(int n,const string &str)
{
    int aC=0,bC=0,cC=0,dC=0,sC=0;

    for(char ch : str)
    {

        if(ch == 'A')
        {
            aC++;
        }

        else if(ch == 'B')
        {
            bC++;
        }
        else if(ch == 'C')
        {
            cC++;
        }
        else if(ch == 'D')
        {
            dC++;
        }
        else
        {
            sC++;
        }

    }


    if(sC==n*4)
    {
        cout<<0<<endl;
        return;
    }




    if(aC > n)
    {
        aC = n;
    }

    if(bC > n)
    {
       bC = n;
    }

    if(cC > n)
    {
        cC= n;
    }

     if(dC > n)
    {
        dC = n;
    }


    cout<<aC+bC+cC+dC<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;

        solve(n,str);
    }
}
