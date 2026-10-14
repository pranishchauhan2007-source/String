
#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();

    for (int i = 0; i <= n - m; i++) {
        int first = i, second = 0;

        while (second < m) {
            if (haystack[first] != needle[second]) {
                break;
            } else {
                first++;
                second++;
            }
        }

        if (second == m)
            return i;
    }

    return -1;
}

int main() {
    string haystack = "abacdabacd";
    string needle = "abacd";

    cout << strStr(haystack, needle);
    return 0;
}
