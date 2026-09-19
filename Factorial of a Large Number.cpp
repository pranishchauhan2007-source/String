#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ans(1, 1);

    while (n > 1)
    {
        int carry = 0;
        int size = ans.size();

        for (int i = 0; i < size; i++)
        {
            int res = ans[i] * n + carry;
            ans[i] = res % 10;
            carry = res / 10;
        }

        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }

        n--;
    }

    reverse(ans.begin(), ans.end());

    for (int digit : ans)
    {
        cout << digit;
    }

    return 0;
}