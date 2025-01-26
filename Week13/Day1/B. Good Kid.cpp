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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        long long int mul = v[0]+1;

        for(int i=1; i<n; i++)
        {
            mul*=v[i];
        }

        cout<<mul<<endl;
    }
}
