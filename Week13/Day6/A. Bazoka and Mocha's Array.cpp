#include<bits/stdc++.h>
using namespace std;

bool solve(vector<long long int> &v)
{
    vector<long long int> temp = v;

    sort(temp.begin(),temp.end());



    long long int n=v.size();

    for(int i=0; i<n; i++)
    {
        bool flag = true;
        for(int j=0; j<n; j++)
        {
            if(v[(i+j)%n] != temp[j])
            {
                flag=false;
                break;
            }
        }

        if(flag)
        {
            return true;
        }
    }

    return false;
}

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

        if(solve(v))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}
