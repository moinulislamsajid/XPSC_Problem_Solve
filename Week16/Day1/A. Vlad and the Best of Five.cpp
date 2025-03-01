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

        int a_cnt=0,b_cnt=0;

        for(char ch : s)
        {
            if(ch=='A')
            {
                a_cnt++;
            }
            else
            {
                b_cnt++;
            }
        }

        if(a_cnt>b_cnt)
        {
            cout<<'A'<<endl;
        }
        else
        {
            cout<<'B'<<endl;
        }
    }
}
