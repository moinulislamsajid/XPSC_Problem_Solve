#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int> v(n);
    int sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        v[i]+=sum;
        sum = max(sum,v[i]);
        cout<<v[i]<<' ';
    }
}
