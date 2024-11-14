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

        long long int mx = *max_element(v.begin(),v.end());
        long long int mn = *min_element(v.begin(),v.end());

        if(mx==mn)
        {
            cout<<"YES"<<endl;
            continue;
        }

        long long int i=1,j=0;

        vector<long long int> ans;

        ans.push_back(v[i-1]);
        while(i<n)
        {
           v[i] = v[i]+v[j];
           ans.push_back(v[i]);
           i++;
           j++;

        }



        long long int lmx = *max_element(ans.begin(),ans.end());
        long long int lmn = *min_element(ans.begin(),ans.end());


        if(lmx==lmn)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
