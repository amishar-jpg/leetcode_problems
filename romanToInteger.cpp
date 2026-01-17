#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    // Array to store Roman values for A-Z
    int value[26] = {0};

    value['I' - 'A'] = 1;
    value['V' - 'A'] = 5;
    value['X' - 'A'] = 10;
    value['L' - 'A'] = 50;
    value['C' - 'A'] = 100;
    value['D' - 'A'] = 500;
    value['M' - 'A'] = 1000;

    int result = 0;

    // Traverse the string
    for (int i = 0; i < s.length() - 1; i++) {
        if (value[s[i] - 'A'] < value[s[i + 1] - 'A']) {
            result -= value[s[i] - 'A'];
        } else {
            result += value[s[i] - 'A'];
        }
    }

    // Add the last Roman numeral
    result += value[s[s.length() - 1] - 'A'];

    return result;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral (uppercase letters only): ";
    cin >> roman;

    int answer = romanToInt(roman);
    cout << "Integer value: " << answer << endl;

    return 0;
}
