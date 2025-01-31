#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;

    while(tt--)
    {
        int x,y;
        cin>>x>>y;

        if(x>=y && y%2==x%2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
