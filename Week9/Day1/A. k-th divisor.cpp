#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    vector<long long int> div;

    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
        }
        if((n/i)!=i)
        {
            div.push_back(n/i);
        }

    }

    sort(div.begin(),div.end());

    if(div.size()<k)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<div[k-1]<<endl;
    }


}
