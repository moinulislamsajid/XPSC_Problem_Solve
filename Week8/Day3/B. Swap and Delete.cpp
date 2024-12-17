#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        string str;
        int o=0,z=0;

        cin>>str;

        for(int i=0; i<str.size(); i++)
        {

            if(str[i]=='1')
            {
                o++;
            }
            else
            {
                z++;
            }
        }

        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='1')
            {
                if(z>0)
                {
                    z--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(o>0)
                {
                    o--;
                }
                else
                {
                    break;
                }
            }
        }

        cout<<z+o<<endl;
    }
}
