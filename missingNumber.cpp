#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Compare index with value
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                return i;
            }
        }

        // Step 3: If all values match index
        return nums.size();
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

    int result = sol.missingNumber(nums);

    cout << "Missing number is: " << result << endl;

    return 0;
}
