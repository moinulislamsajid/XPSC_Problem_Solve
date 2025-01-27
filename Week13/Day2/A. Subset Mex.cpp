#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll findMaxValue(vector<ll> & freq)
{
    ll mA=0,mB=0;

    while(freq[mA]>0)
    {
        freq[mA]--;
        mA++;
    }

    while(freq[mB]>0)
    {
        freq[mB]--;
        mB++;
    }

    return mA+mB;

}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> freq(101,0);
        for(int i=0; i<n; i++)
        {
            int m;
            cin>>m;

            freq[m]++;
        }

        cout<<findMaxValue(freq)<<endl;
    }
}
