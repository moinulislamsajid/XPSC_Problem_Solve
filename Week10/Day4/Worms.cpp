#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int in=1;
    int wo;
    vector<int>arr(1000006);

    for(int i=1; i<=n; i++)
    {
        cin>>wo;
        while(wo--)
        {
            arr[in]=i;
            in++;
        }
    }

    int num;
    cin>>num;
    while(num--)
    {
        cin>>wo;
        cout<<arr[wo]<<endl;
    }
    return 0;
}
