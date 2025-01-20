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

        vector<int> a(n);
        vector<int> b(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        bool eq = true;

        for(int i=0; i<n; i++)
        {
            int dif = b[i] - a[i];

            if(dif==0 || dif==1)
            {
                continue;
            }
            else
            {
                eq=false;
            }
        }

        if(eq)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }



}
