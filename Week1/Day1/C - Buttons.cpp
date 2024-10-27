#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int mx = max(a,b);

    int sum=0;

    if(a == b)
    {
        cout<<a+b<<endl;
        return 0;
    }
    sum+=mx;
    mx--;
    sum+=mx;

    cout<<sum<<endl;
}
