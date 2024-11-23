#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin>>t;

    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;

        long long s=b;

        vector<long long int> v(c);

        for(int i=0; i<c; i++)
        {
            cin>>v[i];
        }

        for(int i=0; i<c; i++)
        {
            s+=min(v[i],a-1);
        }

        cout<<s<<endl;
    }


}
