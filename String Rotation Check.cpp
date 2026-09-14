#include<iostream>
using namespace std;

void rotateClockwise(string &s)
{
    char c = s[s.size()-1];
    int index = s.size()-2;

    while(index >= 0)
    {
        s[index+1] = s[index];
        index--;
    }

    s[0] = c;
}

void rotateAntiClockwise(string &s)
{
    char c = s[0];
    int index = 1;

    while(index < s.size())
    {
        s[index-1] = s[index];
        index++;
    }

    s[s.size()-1] = c;
}

int main()
{
    string str1, str2;

    cin >> str1 >> str2;

    string clockwise = str1;
    string anticlockwise = str1;

    rotateClockwise(clockwise);

    if(clockwise == str2)
    {
        cout << 1;
        return 0;
    }

    rotateAntiClockwise(anticlockwise);

    if(anticlockwise == str2)
    {
        cout << 1;
        return 0;
    }

    cout << 0;

    return 0;
}