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

        string s;
        cin>>s;
        int c=0;

        for(int i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
            {
                c++;
            }
        }

        cout<<c<<endl;
        cout<<(c+1)/2<<endl;

    }
}
