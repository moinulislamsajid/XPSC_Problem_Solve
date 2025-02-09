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

        if(n>2)
        {
            if(n%4==0)
            {
                cout<<(n/4)<<endl;
            }
            else
            {
                int in = n-2;
                cout<<(n/4)+1<<endl;
            }
        }
        else
        {
            cout<<1<<endl;
        }
    }

}
