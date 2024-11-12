#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int l,o;
        cin>>l>>o;

        vector<char> v(l);

        for(int i=0; i<l; i++)
        {
            cin>>v[i];
        }

        int op=0,i=0;

        while(i<l)
        {

                if(v[i] == 'B')
                {
                    op++;
                    i+=o;
                }
                else
                {
                    i++;
                }

        }

        cout<<op<<endl;
    }


}
