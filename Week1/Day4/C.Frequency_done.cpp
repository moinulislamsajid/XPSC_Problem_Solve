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

    sort(v.begin(),v.end());

    long long int mxF=1,mxC=1;

    for(int i=1; i<n; i++)
    {
        if(v[i] == v[i-1])
        {
            mxC++;
        }
        else
        {
            mxF = max(mxF,mxC);
            mxC = 1;
        }
    }

    mxF = max(mxF,mxC);

    cout<<mxF<<endl;

}
