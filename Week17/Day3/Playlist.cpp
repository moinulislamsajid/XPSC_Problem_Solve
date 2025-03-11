#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx = INT_MIN ;
    cin >> n ;
    vector<int> vc(n);
    set<int> st;
    map <int,int > mp;
    for(int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    int r =0, l =0 ;
    while(r < n)
    {
        if(st.find(vc[r]) == st.end())
        {
            st.insert(vc[r]) ;
        }
        else
        {
            while(st.find(vc[r]) != st.end())
            {
                st.erase(vc[l]);
                l++;
            }
            st.insert(vc[r]) ;
        }
        mx = max(mx, r-l+1) ;
        r++;
    }
    cout<< mx <<endl;
}

