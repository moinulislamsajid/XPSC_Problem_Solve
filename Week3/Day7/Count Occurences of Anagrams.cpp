//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here

	    int n = pat.length();
	    int k = txt.length();

	    vector<int> v(26,0);
	    vector<int> v1(26,0);

	    for(int i =0; i<n; i++)
	    {
	        v[pat[i]-'a']++;
	        v1[txt[i]-'a']++;
	    }

	    int c=0;

	    if(v==v1)
	    {
	        c++;
	    }

	    for(int i=n; i<k; i++)
	    {
	         v1[txt[i]-'a']++;
             v1[txt[i-n]-'a']--;

             if(v==v1)
             {

                 c++;
             }

	    }

	    return c;

	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
