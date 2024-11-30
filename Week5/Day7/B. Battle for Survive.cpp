#include<bits/stdc++.h>
using namespace std;

int main()
{

        long long int t;
        cin>>t;

        while(t--)
        {
            long long int n;
            cin>>n;

            vector<long long int> v(n);
            long long int s=0;

            for(int i=0; i<n; i++)
            {
                cin>>v[i];
                s+=v[i];
            }


            cout<<s-2*v[n-2]<<endl;

            long long int sum=v[n-1]-v[n-2];

            for(int i=0; i<n-2; i++)
            {
                sum+=v[i];
            }

            cout<<sum<<endl;

        }
    }

