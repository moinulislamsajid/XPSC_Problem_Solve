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

        string str;
        cin>>str;

        int l=0,r=0,wc=0;

        for(r=0; r<k; r++)
        {
            if(str[r]=='W')
            {
                wc++;
            }
        }

        int tempWC = wc;

        while(r<n)
        {
            if(str[l]=='W')
            {
                wc--;
            }
            if(str[r]=='W')
            {
                wc++;
            }


            tempWC = min(tempWC,wc);
            r++,l++;

        }

        cout<<tempWC<<endl;
    }

}
