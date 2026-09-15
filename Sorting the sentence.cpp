#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string temp;
    int count = 0, index = 0;

    vector<string> ans(10);

    while(index < s.size())
    {
        if(s[index] == ' ')
        {
            int pos = temp[temp.size()-1] - '0';

            temp.pop_back();
            ans[pos] = temp;

            temp.clear();
            count++;
            index++;
        }
        else
        {
            temp += s[index];
            index++;
        }
    }

    // Last word
    int pos = temp[temp.size()-1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    count++;

    temp.clear();

    for(int i = 1; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }

    temp.pop_back();

    cout << temp;

    return 0;
}