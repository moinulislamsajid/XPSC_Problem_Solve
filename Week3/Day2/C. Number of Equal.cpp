#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    vector<int> v(x);
    vector<int> v1(y);

    for(int i=0; i<x; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<y; i++)
    {
        cin>>v1[i];
    }
    int s=0,e=0;
    long long int ans=0;
    while(s<x && e<y)
    {
        int c= v[s],c1=0,c2=0;
        while(s<x&& v[s]==c)
        {
            c1++;
            s++;
        }
        while(e<y && c>v1[e])
        {
            e++;
        }
        while(e<y && v1[e]==c)
        {
            c2++;
             e++;
        }
        ans+=(1LL*c1*c2);
    }
    cout<<ans<<endl;
    return 0;
}
