#include<bits/stdc++.h>
using namespace std;
const int maxN = (1LL << 15);

vector<int> allPalindrome;

bool isPalin(int x)
{
    string s = to_string(x);
    int sz = s.size();

    for(int i=0; i<sz/2; i++)
    {
        if(s[i] != s[sz-i-1])
        {
            return false;
            //break;
        }
    }

    return true;
}

void markPalindrome()
{
    for(int i=0; i<maxN; i++)
    {
        if(isPalin(i))
        {
            allPalindrome.push_back(i);
        }
    }
}

int main()
{

    markPalindrome();
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v(n),cnt(maxN+1);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }

        long long int ans = n;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<allPalindrome.size(); j++)
            {
                int curr = (v[i] ^ allPalindrome[j]);
                ans+=cnt[curr];
            }
        }


        cout<<(ans/2)<<endl;
    }
}
