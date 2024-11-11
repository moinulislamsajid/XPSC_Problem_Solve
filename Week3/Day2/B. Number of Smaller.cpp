#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    vector<int> v(x);
    vector<int> v1(y);



    for(int i=0; i<x; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<y; i++)
    {
        cin>>v1[i];
    }
    int s=0,e=0,cnt=0;
    while(e<y)
    {
        if(s<x && v[s]<v1[e])
        {
            cnt++;
            s++;
        }
        else
        {
            cout<<cnt<<" ";
            e++;
        }
    }
    return 0;
}
