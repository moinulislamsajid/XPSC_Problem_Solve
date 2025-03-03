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
        int sum=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        for(int i=0; i<n; i++)
        {
            if(v[i]<0)
            {
                sum+=abs(v[i]);
            }
            else
            {
                sum+=v[i];
            }
        }

        cout<<sum<<endl;
    }
}
