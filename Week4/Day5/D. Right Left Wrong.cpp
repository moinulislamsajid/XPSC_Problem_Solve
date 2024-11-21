#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;

        vector<long long int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        vector<char> ch(n);

        deque<long long int>left;
        deque<long long int>right;


        for(int i=0; i<n; i++)
        {
            cin>>ch[i];

            if(ch[i]=='L')
            {
                left.push_back(i);
            }
            else
            {
                right.push_back(i);
            }
        }


        vector<long long int> pSum(n);

        pSum[0] = v[0];

        for(int i=1; i<n; i++)
        {
            pSum[i] = pSum[i-1] + v[i];
        }

        long long int sum=0;

        while(left.size()>0 && right.size()>0)
        {

            if(left.front()<right.back())
            {
                if(left.front()==0)
                {
                    sum+=pSum[right.back()];
                    left.pop_front();
                    right.pop_back();
                }
                else
                {
                    long long int ss = pSum[right.back()] - pSum[left.front()-1];
                    sum+=ss;
                    left.pop_front();
                    right.pop_back();
                }

            }
            else if(left>right)
            {
                break;
            }
        }

        cout<<sum<<endl;

    }



}
