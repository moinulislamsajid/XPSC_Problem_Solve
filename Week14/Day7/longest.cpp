#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        b-=a;
        long long low=2,right=1000000000;
        while(low<right)
        {
            long long m=(low+right)/2;
            if(m*(m-1)/2<=b)
            {
                low=m+1;
            }
            else
            {
                right=m;
            }
        }
        cout<<low-1<<endl;
    }
}
