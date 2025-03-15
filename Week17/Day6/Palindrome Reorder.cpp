#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    map<char,int> mp;

    // get count the frequency

    for(char ch : s)
    {
        mp[ch]++;
    }

    int oddcount=0;
    int oddchar = '\0';

    string firstH="",secondH="";

    for(auto it : mp)
    {
        if(it.second%2!=0)
        {
            oddcount++;
            oddchar=it.first;
        }
    }

    if(oddcount>1)
    {
        cout<<"NO SOLUTION\n";
        return;
    }

    for(auto it : mp)
    {
        string temp(it.second/2,it.first);
        firstH+=temp;
    }

    secondH = firstH;

    reverse(secondH.begin(),secondH.end());


    if(oddcount==1)
    {
        firstH+=oddchar;
    }

    cout<<firstH+secondH<<'\n';
}

int main()
{
    solve();
}
