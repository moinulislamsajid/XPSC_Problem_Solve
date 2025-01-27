#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int ocnt=0,zcnt=0;

        for(char ch : s)
        {
            if(ch=='1')
            {
                ocnt++;
            }
            else
            {
                zcnt++;
            }
        }

        int p = min(ocnt,zcnt);

        if(p%2==1)
        {
            cout<<"DA"<<endl;
        }
        else
        {
            cout<<"NET"<<endl;
        }

    }
}
