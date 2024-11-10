#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x,y,z;
    cin>>x>>y>>z;

    double tPoint = x + 0.5 * y;

    int rGame = 4-(x+y+z);

    int tFPoint = tPoint+rGame;

    if(tFPoint>2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
