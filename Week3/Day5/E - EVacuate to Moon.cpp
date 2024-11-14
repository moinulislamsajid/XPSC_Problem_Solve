#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        vector<int> v(a);
        vector<int> v1(b);

        for(int i=0; i<a; i++)
        {
            cin>>v[i];
        }

        for(int i = 0; i<b; i++)
        {
            cin>>v1[i];
        }

        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());

        long long total = 0;
        int l=a - 1,h=b - 1;

        while (true)
        {
            if(v[l]>=v1[h]*c)
            {
                total+=v1[h]*c;
            }
            else if(v[l]<v1[h]*c)
            {
                total+=v[l];
            }
            l--,h--;

            if(l<0 || h<0)
            {
                break;
            }
        }

        cout<<total<<endl;
    }

    return 0;
}
