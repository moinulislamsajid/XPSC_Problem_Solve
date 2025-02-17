#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,f,k;
        cin>>n>>f>>k;

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int fav = v[f-1];


        sort(v.rbegin(),v.rend());

        /*for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }*/

        vector<int> decision(k);

        bool maybe1=false,maybe2=false;

        for(int i=0; i<k; i++)
        {
            decision[i] = v[i];
        }

        for(int i=0; i<k; i++)
        {
            if(decision[i]==fav)
            {
                maybe1=true;
            }
        }

        for(int i=k; i<n; i++)
        {
            if(v[i]==fav)
            {
                maybe2=true;
            }
        }

        if(maybe1 && maybe2)
        {
            cout<<"MAYBE"<<endl;
        }
        else if(maybe1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }

}
