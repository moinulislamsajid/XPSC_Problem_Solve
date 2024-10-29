#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;


    int coun[26] = {0};


    for(char ch : str)
    {
        if(ch>='a' && ch<='z')
        {
            coun[ch -'a']++;
        }
    }

    bool found = false;
    int indx;

    for(int i=0; i<26; i++)
    {
        if(coun[i] == 0)
        {
            indx = i;
            found = true;
            break;
        }
    }

    if(found)
    {
        cout<<char(indx + 'a')<<endl;
    }else
    {
        cout<<"None"<<endl;
    }

}
