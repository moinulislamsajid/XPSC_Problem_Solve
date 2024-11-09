#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;


        set<int> st;


        for(int i=0; i<y; i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }

        while(z--)
        {
            int stu;
            cin>>stu;


            if(stu<*(st.begin()))
            {
                cout<<*(st.begin())-1<<endl;
                continue;
            }
            if(stu>*(st.rbegin()))
            {
                int toa=*(st.rbegin());
                cout<<x-toa<<endl;
                continue;
            }


            auto val=st.lower_bound(stu);
            auto val1=val;
            val1--;
            int a=*(val);
            int b=*(val1);
            int mid = (a+b)/2;
            cout<<min(abs(mid-a),abs(mid-b))<<endl;;





        }
    }
    return 0;
}
