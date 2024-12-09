#include <iostream>
#include <vector>
using namespace std;

int ham(int a, int b)
{
    int xorr = a ^ b;
    int cnt = 0;
    while (xorr)
    {
        cnt+= xorr & 1;
        xorr>>=1;
    }
    return cnt;
}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> v(m + 1);
    for (int i=0; i<=m; i++)
    {
        cin>>v[i];
    }

    int army = v[m];
    int cntf= 0;

    for (int i=0; i<m; i++)
    {
        if (ham(army,v[i]) <= k)
        {
            cntf++;
        }
    }

    cout<<cntf<< endl;
    return 0;
}

