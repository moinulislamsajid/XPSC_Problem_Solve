#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,S,sum=0;
        cin>>n>>S;

        vector<long long int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        for(int i=0; i<n; i++)
        {
            sum+=v[i];
        }

        if(sum<S)
        {
            cout<<-1<<endl;
            continue;
        }

        long long l=0,h=0,cs=0,sC=0;

        while(h<n)
        {
            cs+=v[h];

            while(cs>S)
            {
                cs-=v[l];
                l++;
            }

            if(cs==S)
            {
                sC=max(sC,h-l+1);
            }

            h++;
        }

        cout<<n-sC<<endl;
    }
}
