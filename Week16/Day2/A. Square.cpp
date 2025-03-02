#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<int>v(4);

        for(int i=0; i<4; i++)
        {
            int x,y;
            cin>>x>>y;
            v[i] = x;
        }

        int x = *max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end());
        cout<<x*x<<endl;
    }
}
