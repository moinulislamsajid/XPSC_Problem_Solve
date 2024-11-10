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

        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        int minR = INT_MAX;

        for(int i=0; i<=2; i++)
        {
            int r = v[n-1-i]-v[2-i];
            minR = min(minR,r);
        }

        cout<<minR<<endl;
    }
}
