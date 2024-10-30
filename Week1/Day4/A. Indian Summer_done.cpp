#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<pair<string,string>> v;

    for(int i=0; i<n; i++)
    {
        string str1,str2;
        cin>>str1>>str2;
        v.push_back({str1,str2});
    }

    set<pair<string,string>> levCount(v.begin(),v.end());

    cout<<levCount.size()<<endl;

}
