#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n >> m;

    vector<int> a(n),b(m);


    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    int l=0,h=0;
    vector<int> result;

    while (l< n && h<m)
    {
        if (a[l] < b[h])
        {
            result.push_back(a[l]);
            l++;
        }
        else
        {
            result.push_back(b[h]);
            h++;
        }
    }


    while (l<n)
    {
        result.push_back(a[l]);
        l++;
    }

    while (h<m)
    {
        result.push_back(b[h]);
        h++;
    }


    for (int i=0; i<result.size(); i++)
    {
        cout<<result[i]<< " ";
    }

    return 0;
}
