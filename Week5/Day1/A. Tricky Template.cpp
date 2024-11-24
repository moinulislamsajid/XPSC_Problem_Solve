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

        string a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;

        bool flag = false;

        for(int i=0; i<n; i++)
        {
            if(c[i]!=a[i] && b[i]!=c[i])
            {
                flag = true;
                break;
            }
        }

        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
