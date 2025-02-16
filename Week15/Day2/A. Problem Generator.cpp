#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;


        vector<int> freq(101,0);

        for(char ch : s)
        {
            freq[ch-'A']++;
        }
        int cnt=0,ans=0;

        for(char i='A'; i<='G'; i++)
        {
            if(freq[i-'A']==0)
            {
                cnt++;
                continue;
            }
            if(freq[i-'A']<m)
            {
                ans+= m-freq[i-'A'];
            }
        }

       cout<<(cnt*m)+ans<<endl;


    }
}
