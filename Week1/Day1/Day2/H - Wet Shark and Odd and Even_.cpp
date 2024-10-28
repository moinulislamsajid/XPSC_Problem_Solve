#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    vector<long long int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    long long int sum = 0;
    long long int mOdd = INT_MAX;

    for(int i=0; i<n; i++)
    {
        sum+=v[i];
    }

    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(v[i] % 2 == 1 && v[i] <mOdd)
            {
                mOdd = v[i];
            }
        }

        cout<<sum-mOdd<<endl;
    }
}
