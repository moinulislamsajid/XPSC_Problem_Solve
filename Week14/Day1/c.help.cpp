#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int robing = 0;
        int people = 0;

        for(int i=0; i<n; i++)
        {
            if(v[i] >= k)
            {
                robing+=v[i];
            }
            else if(v[i] == 0 && robing>0)
            {
                people++;
                robing--;
            }
        }

        cout<<people<<endl;
    }
}
