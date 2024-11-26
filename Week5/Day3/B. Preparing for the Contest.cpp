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
            v[i] = n-i;
        }

        reverse(v.end()-k-1,v.end());

        for(int i=0; i<n; i++)
        {
            if(i) cout<<" ";
            cout<<v[i];
        }

        cout<<endl;
    }
}
