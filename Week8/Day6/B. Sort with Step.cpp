#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            v[i]--;
        }

        int cnt = 0;

        for(int i=0; i<n; i++)
        {
            if(v[i]%k != i%k)
            {
                cnt++;
            }
        }

        if(cnt==0)
        {
            cout<<0<<endl;
        }
        else if(cnt==2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
