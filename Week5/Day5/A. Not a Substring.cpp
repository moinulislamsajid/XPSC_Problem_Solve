#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        if (s == "()")
        {
             cout<<"NO"<<endl;
        }

        else
        {
            cout<<"YES"<<endl;
            if (s[0] == s[1] || s[2] == s[1])
            {
                for (int i=1; i<=s.size(); i++)
                {
                     cout << "()";
                }

            }
            else
            {
                for (int i=1; i<= s.size(); i++)
                {
                    cout << "(";
                }

                for (int i = 1; i<=s.size(); i++)
                {
                     cout << ")";
                }

            }
        }
        cout<<endl;
    }






}
