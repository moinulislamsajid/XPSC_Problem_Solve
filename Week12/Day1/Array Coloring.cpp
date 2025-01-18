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

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        vector<int> even;
        vector<int> odd;

        for(int i=0; i<n; i++)
        {
            if(v[i]%2==0)
            {
                even.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }
        }

        int esum=0,osum=0;

        for(int in : even)
        {
            esum+=in;
        }
        for(int od : odd)
        {
            osum+=od;
        }


        if((esum%2==0 && osum%2==0)  || (esum%2==1 && osum%2==1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
