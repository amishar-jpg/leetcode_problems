#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();

    // If needle is empty, return 0
    if (m == 0)
        return 0;

    // Traverse haystack
    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        // Check if needle matches starting at index i
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }

        // If full needle matched
        if (j == m) {
            return i;
        }
    }

    // If needle not found
    return -1;
}

int main() {
    string haystack, needle;

    cout << "Enter haystack string: ";
    cin >> haystack;

    cout << "Enter needle string: ";
    cin >> needle;

    int index = strStr(haystack, needle);

    if (index != -1)
        cout << "Needle found at index: " << index << endl;
    else
        cout << "Needle not found in haystack." << endl;
    return 0;
}
