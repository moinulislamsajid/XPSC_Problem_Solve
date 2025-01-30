#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int v;
    int mx = -1;

    for(int i=0; i<n; i++)
    {
        cin>>v;

        if(v>mx+1)
        {
            cout<<i+1<<endl;
            return 0;
        }

        mx = max(mx,v);
    }

    cout<<-1<<endl;
}
