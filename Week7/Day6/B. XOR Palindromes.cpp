#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        string st(n+1,'0');
        int ans = 0;
        int m1 = 0;
        int m2 = 0;
        for(int i = 0; i <= n/2-1; i++)
        {
            if(s[i] == s[n-i-1])
            {
                m2++;
            }

            else
            {
                 ans++;
            }

        }
        if(n%2 == 1)
        {
          m1++;
        }

        for(int j = 0; j <= m2; j++)
        {
            for(int k = 0; k <= m1; k++)
            {
                st[ans + j*2 + k] = '1';
            }
        }
        cout<<st<<endl;
    }
}

