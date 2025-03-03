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

        int sum=0;

        bool check_one = false;

        for(int i=0; i<n; i++)
        {
            int y;
            cin>>y;

            sum+=y;

            if(y%3==1)
            {
                check_one=true;
            }
        }

        if(sum%3==0)
        {
            cout<<0<<endl;
        }

        else if(sum%3==2)
        {
            cout<<1<<endl;
        }
        else
        {
            if(check_one)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
    }
}
