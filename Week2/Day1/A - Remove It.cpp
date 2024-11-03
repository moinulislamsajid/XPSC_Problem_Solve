#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    auto it = remove(v.begin(),v.end(),m);
    v.erase(it,v.end());
    for(int in : v)
    {
        cout<<in<<" ";
    }
}
