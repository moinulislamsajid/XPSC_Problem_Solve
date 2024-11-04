#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string str;
        cin>>str;  // Timur, miurT, Trumi, mriTu



        if(str.length() != 5)
        {
            cout<<"NO"<<endl;
            continue;
        }

        int i=0,m=0,u=0,r=0,bigT =0;

        for(char ch : str)
        {
            if(ch=='i')
            {
                i++;
            }
            else if(ch=='m')
            {
                m++;
            }
            else if(ch=='u')
            {
                u++;
            }
            else if(ch=='r')
            {
                r++;
            }
            else if(ch == 'T')
            {
                bigT++;
            }
        }


        if( bigT == 1&& i==1 && m==1 && u==1 && r==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}
