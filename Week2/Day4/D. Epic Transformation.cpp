#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        map<long long int,long long int> mp;
        for(long long int i=0; i<n; i++)
        {
            long long int x;
            cin>>x;
            mp[x]++;
        }
        priority_queue<long long int> pq;
        for(auto &it:mp)
        {
            pq.push(it.second);
        }
        while(!pq.empty())
        {
            if(pq.size()<2)
            {
                break;
            }
            long long int u = pq.top();
            pq.pop();
            long long int v =pq.top();
            pq.pop();
            u--;
            v--;
            if(u>0)
            {
                pq.push(u);
            }
            if(v>0)
            {
                pq.push(v);
            }
        }
        long long int last=0;
        while(!pq.empty())
        {
            last+=pq.top();
            pq.pop();
        }
        cout<<last<<endl;
    }

}
