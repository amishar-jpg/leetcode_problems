#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Remove duplicates
        vector<int> unique;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                unique.push_back(nums[i]);
            }
        }

        // Step 3: Return third max or max
        int n = unique.size();
        if (n >= 3)
            return unique[n - 3];
        else
            return unique[n - 1];
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sol.thirdMax(nums);

    cout << "Third maximum number is: " << result << endl;

    return 0;
}
