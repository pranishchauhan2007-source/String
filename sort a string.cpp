#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> alpha(26, 0);
     string ans = "";
    for(int i = 0; i < s.size(); i++)
    {
        alpha[s[i] - 'a'] ++;
    }

    for(int i = 0; i < 26; i++)
    {
       char c='a'+i;
        while(alpha[i])
        {
            ans+=c;
            alpha[i]--;
        }
    }

    cout << ans;
    return 0;
}