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
        priority_queue<int> pque;
        vector<int>v;
        for(int i=1; i<=n; i++)
        {
            pque.push(i);
        }


        while(pque.size()>1)
        {
            int t=pque.top();
            pque.pop();
            int tt=pque.top();
            pque.pop();
            int sum=(t+tt);
            int x;
            if((sum%2)!=0)
            {
                x=(sum/2)+1;
            }
            else
            {
                x=(sum/2);
            }
            pque.push(x);
            v.push_back(t);
            v.push_back(tt);
        }
        cout<<pque.top()<<endl;
        for(auto ite=v.begin(); ite!=v.end(); ite++)
        {
            cout<<*ite<<" "<<*(ite+1)<<endl;
            ite++;
        }
    }
    return 0;




}
