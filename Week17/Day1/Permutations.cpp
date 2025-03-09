#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }

    if(n<=3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        if(n%2==0)
        {
            for(int i=n-1; i>=1; i--)
            {
                if(i%2==1)
                {
                    cout<<i<<" ";
                }
            }
            cout<<n<<" ";

            for(int i=2; i<n; i+=2)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            for(int i=n-1; i>=2; i--)
            {
                if(i%2==0)
                {
                    cout<<i<<" ";
                }
            }
            cout<<n<<" ";
            for(int i=1; i<n; i+=2)
            {
                cout<<i<<" ";
            }

        }
    }
}
