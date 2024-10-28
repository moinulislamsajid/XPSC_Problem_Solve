#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(a>c)
    {
        cout<<0<<endl;
        return 0;
    }

    int sum = b;
    int sub = c - a;

    while(sub>=a)
    {
        sum += b;
        sub -= a;
    }

    cout<<sum<<endl;
}
