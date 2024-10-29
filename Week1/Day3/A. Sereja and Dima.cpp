#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    deque<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    int sSum=0,dSum=0;

    int i=1;

    while(!v.empty())
    {
        int first = v.front(), last = v.back();

        if(i%2==1)
        {
            if(first>=last)
            {
                sSum+=first;
                v.pop_front();
            }
            else
            {
                sSum+=last;
                v.pop_back();
            }
        }
        else
        {
            if(first>=last)
            {
                dSum+=first;
                v.pop_front();
            }
            else
            {
                dSum+=last;
                v.pop_back();
            }
        }

        i++;
    }


        cout<<sSum<<" "<<dSum<<endl;
}
