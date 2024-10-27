#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    int c=0;

    if(n > m)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i=n; i<=m; i++)
        {
            c++;
        }

        cout<<c<<endl;

    }


}
