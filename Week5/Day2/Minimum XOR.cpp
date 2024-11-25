#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,X=0;
        cin>>n;
        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
            X^= v[i];
        }

        int ans = X;
        for (int i = 0; i < n; i++)
        {
            int cXOR = (X^v[i]);
            ans = min(ans, cXOR);
        }

        cout<<ans<<endl;
    }
    return 0;
}
