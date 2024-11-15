#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        vector<int> v(a);
        for (int i=0; i<a; i++)
        {
            cin >> v[i];
        }

        long long int cn=0,tD=0,total;


        for(int i=0; i<a; i++)
        {
            if(v[i]<=c)
            {
                tD++;
            }
            else
            {

                if (tD>=b)
                {
                    total = tD - b + 1;
                    cn+=(total * (total + 1)) / 2;
                }
                //tD = 0;
            }
        }


        if (tD>=b)
        {
             total = tD - b + 1;
             cn+=(total * (total + 1)) / 2;
        }

        cout<<cn<<endl;
    }

    return 0;
}
