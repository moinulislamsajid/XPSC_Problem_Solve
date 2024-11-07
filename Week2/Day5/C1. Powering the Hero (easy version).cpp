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
        priority_queue<int> pq;
        pq.push(0);
        long long int ans=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]!=0)
            {
                pq.push(v[i]);
            }
            else if(v[i]==0 && !pq.empty())
            {
                ans+=pq.top();
                pq.pop();

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
