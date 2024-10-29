#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int x = c;
    int ans;

    while(1)
    {
        if(x>=a && x<=b)
        {
            ans = x;
            break;
        }
        else if(x>b)
        {
            ans = -1;
            break;
        }

        x+=x;
    }

    cout<<ans<<endl;
}
