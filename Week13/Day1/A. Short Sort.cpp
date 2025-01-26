#include<bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        char f = s.front();
        char l = s.back();

        if(f=='b' && l=='a')
        {
            cout<<"NO"<<endl;
        }
        else if(f=='c' && l=='b')
        {
            cout<<"NO"<<endl;

        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
