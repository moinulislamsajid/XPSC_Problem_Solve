#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,S;
    cin>>n>>S;

    vector<long long int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    multiset<long long int> muset;

    long long int l=0,h=0,ans=0;

    while(h<n)
    {
        muset.insert(v[h]);

        long long int mn = *muset.begin(),mx = *muset.rbegin();

        if((mx-mn)<=S)
        {
            ans+=(h-l+1);
        }
        else
        {
            while(l<=h)
            {

                mn = *muset.begin(),mx = *muset.rbegin();
                if((mx-mn)<=S)
                {
                    break;
                }

                muset.erase(muset.find(v[l]));
                l++;

            }
            mn = *muset.begin(),mx = *muset.rbegin();
            if((mx-mn)<=S)
            {
                ans+=(h-l+1);
            }
        }

        h++;
    }

    cout<<ans<<endl;

}
