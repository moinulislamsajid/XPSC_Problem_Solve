#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        deque<char> dq;
        long long int  l=0, u=0;
        for(int i=str.size()-1; i>=0; i--)
        {
            if(str[i]=='b')
            {
                l++;
                continue;
            }
            else if(str[i]=='B')
            {
                u++;
                continue;
            }
            else if(l && islower(str[i]))
            {
                l--;
                continue;
            }
            else if(u && isupper(str[i]))
            {
                u--;
                continue;
            }
            dq.push_front(str[i]);
        }
        for(auto &itt:dq)
        {
            cout<<itt;
        }
        cout<<endl;
    }

}
