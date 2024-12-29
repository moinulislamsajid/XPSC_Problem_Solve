#include<bits/stdc++.h>
using namespace std;

bool ch[26];
string s, ans = "";

int main()
{
    cin >> s;
    int cnt = 0;
    for (char c : s)
    {
        if (!ch[c - 'A'])
        {
            ch[c - 'A'] = true;
            cnt++;
        }
        else
        {
            ans += c;
            ch[c - 'A'] = false;
            cnt--;
        }
    }
    if (cnt >= 2)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    cout << ans;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if (ch[i - 'A'])
        {
            cout << i;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}
