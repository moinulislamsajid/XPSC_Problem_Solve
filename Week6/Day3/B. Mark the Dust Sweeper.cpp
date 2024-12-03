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

        reverse(v.begin(),v.end());

        while(!v.empty() && v.back()==0)
        {
            v.pop_back();
        }
        if(v.empty())
        {
            cout<<0<<endl;
            continue;
        }

        long long int res=0;
        reverse(v.begin(),v.end());

        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]==0)
            {
                res++;
            }
            else
            {
                res+=v[i];
            }
        }

        cout<<res<<endl;
    }


}
