#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        string s;
        cin>>s;

        ll sq = sqrt(n);
        ll an = sq*sq;

        if(an!=n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            vector<ll>v,one;
            ll f=0;

            for(int i=0; i<sq; i++)
            {
                one.push_back(1);
                if(i==0 || i==(sq-1))
                {
                    v.push_back(1);
                }
                else
                {
                    v.push_back(0);
                }
            }
            long long cnt=0,i,j;
            for(i=0; i<n; i++)
            {
                vector<long long>tmp;
                cnt++;
                for(j=i; j<i+sq; j++)
                {
                    tmp.push_back(s[j]-'0');
                }
                if(cnt==1 || cnt==sq)
                {
                    if(one!=tmp)
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    if(v!=tmp)
                    {
                        f=1;
                        break;
                    }
                }
                i+=(sq-1);
            }
            if(f==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }


        }
    }

}
